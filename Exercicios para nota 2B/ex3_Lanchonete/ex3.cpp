/* Sistema de pedidos uma lanchonete 
O usuário escolhe um produto e informa a quantidade. O programa apresenta: 
• preço unitário; 
• quantidade; 
• subtotal; 
• desconto; 
• total da compra.  */

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#ifdef _WIN32
  #include <windows.h>
#endif

using namespace std;

// Estrutura do item do cardápio
struct Item{
    string nome;
    double valor;
    int quantidade;
};

// Função que recebe o item escolhido
int choseOption(const vector<Item>& cardapio){
    int opcao = 0;

    while(true){
        cout << "[Digite '0' para encerrar o pedido]" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Se digitar 0, considera que o usuário quer ecnerrar o pedido
        if(opcao == 0){
            break;
        }
        // Trata o número do pedido, garantindo que seja uma das opções disponíveis
        if(!opcao || opcao < 0 || opcao > static_cast<int>(cardapio.size())){
            cout << "\nVALOR INVÁLIDO! [Escolha uma das opções do cardápio.]\n" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        // Retorna a opção escolhida
        return opcao;
    }

    return 0;
}

// Função que mostra o cardápio
void showCardapio(const vector<Item>& cardapio){
    system("cls");
    for(size_t i = 0; i < cardapio.size(); i++){
        cout << fixed << setprecision(2);
        cout << i + 1 << " - " << cardapio[i].nome << " ====> R$ " << cardapio[i].valor << endl;
    }
}

// Funcção que trata o pedido
void showPedido(vector<Item>& pedido){
    double total = 0;
    double desconto = 0;

    // Adiciona ao total o valor de cada item do pedido
    for(size_t i = 0; i < pedido.size(); i++){
        double subtotal = pedido[i].valor * pedido[i].quantidade;
        total += subtotal;
    }

    // Mostra o subtotal e pede um desconto em porcentagem
    while(true){
        cout << "\nSubtotal = R$ " << total << endl;
        cout << "% Desconto: ";
        if(!(cin >> desconto) || desconto < 0){
            cout << "Valor inválido!";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }

    
    system("cls");
    cout << "============= PEDIDO =============\n" << endl;

    // Lista os itens do pedido exibindo seus valores unitários e o total de cada um
    for(size_t i = 0; i < pedido.size(); i++){
        double subtotal = pedido[i].valor * pedido[i].quantidade;
        cout << fixed << setprecision(2);
        cout << pedido[i].quantidade << "x " << pedido[i].nome << " R$ " << pedido[i].valor << " = R$ " << subtotal << endl;
    }

    // Calcula o desconto apenas se houver
    if(desconto > 0){
        cout << fixed << setprecision(2);
        cout << "\nSubtotal = R$ " << total << endl;
        cout << "Desconto " << desconto << "%: -R$" << (total * desconto) / 100  << endl;
    }

    cout << "\nTotal = R$ " << total - ((total * desconto) / 100);
}

int main() {
    #ifdef _WIN32
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
    #endif
    
    // Vetor do cardápio
    const vector<Item> cardapio = {
        {"Coxinha", 8.50, 0},
        {"Kibe", 8.50, 0},
        {"Pastel", 9.50, 0},
        {"Hamburguer", 7.50, 0}
    };

    // Vetor dos itens do pedido
    vector<Item> pedido;

    // Execução do programa
    do{
        // Mostra opções do cardápio
        showCardapio(cardapio);

        // Mostra quantos itens já foram inseridos no pedido
        cout << "\nItens no pedido: " << pedido.size() << "\n" << endl;

        // Informa o índice do item escolhido
        int itemEscolhido = choseOption(cardapio) - 1;

        // Para a execução caso o usuário digite 0
        if(itemEscolhido == -1){
            break;       
        }
        
        int qtdItem = 0;

        // Recebe as unidades de cada item do pedido
        cout << "Quantidade: ";
        if(!(cin >> qtdItem) || qtdItem < 1){
            cout << "Quantidade mínima: 1" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        // Insere todas as informações no pedido - Nome, valor e quantidade
        pedido.emplace_back(Item {cardapio[itemEscolhido].nome, cardapio[itemEscolhido].valor, qtdItem});
    }while(true);

    // Mostra o pedido completo após finalizar, além de mostrar o valor total com e sem desconto.
    showPedido(pedido);

    cin.ignore(10000, '\n');
    cin.get();
}