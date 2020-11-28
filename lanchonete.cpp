#include <iostream>
#include <locale>

using namespace std;

struct Combo1{
    string nome;
    int numeroItens;
    string item1, item2, item3, item4;
    float valor;
};

struct Combo2{
    string nome;
    int numeroItens;
    string item1, item2, item3;
    float valor;
};

struct Combo3{
    string nome;
    int numeroItens;
    string item1, item2;
    float valor;
};

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    Combo1 combo1;

    combo1.nome = "Prata da Casa";
    combo1.numeroItens = 4;
    combo1.item1 = "X-Tudo";
    combo1.item2 = "Batata Frita";
    combo1.item3 = "Pastel";
    combo1.item4 = "Coca cola lata";
    combo1.valor = 49.90;

    Combo2 combo2;

    combo2.nome = "+ Light";
    combo2.numeroItens = 3;
    combo2.item1 = "X-Frango";
    combo2.item2 = "Batata Frita";
    combo2.item3 = "Fanta Laranja";
    combo2.valor = 32.50;

    Combo3 combo3;

    combo3.nome = "Lanche Pobre";
    combo3.numeroItens = 2;
    combo3.item1 = "Hambúrguer";
    combo3.item2 = "Coca cola lata";
    combo3.valor = 19.90;

    string nome;
    int codigoCliente, opc, quantidade;
    float valorTotal;

    cout << "Bem vindo ao Big Lanches!" << endl;
    cout << "Não perca tempo... Faça já o seu pedido!" << endl;
    cout << "Qual é o seu nome? ";
    cin >> nome;
    cout << "Digite o código do cliente.: ";
    cin >> codigoCliente;
    cout << "Pressione 1 para ver o nosso cardápio.: ";
    cin >> opc;

    switch(opc)
    {
        case 1:
            cout << "\nCombo 1" << endl;
            cout << " Nome do combo: " << combo1.nome << "\n" << " Número de itens: " << combo1.numeroItens << "\n" << " Itens: " << combo1.item1 << ", " << combo1.item2 << ", " << combo1.item3 << ", " << combo1.item4 << "." << endl;
            cout << "\nEste combo custa.: R$" << combo1.valor << endl;
            
            cout << "-----------------------------------------------------" << endl;

            cout << "Combo 2" << endl;
            cout << " Nome do combo: " << combo2.nome << "\n" << " Número de itens: " << combo2.numeroItens << "\n" << " Itens: " << combo2.item1 << ", " << combo2.item2 << ", " << combo2.item3 << "." << endl;
            cout << "\nEste combo custa.: R$" << combo2.valor << endl;

            cout << "-----------------------------------------------------" << endl;

            cout << "Combo 3" << endl;
            cout << " Nome do combo: " << combo3.nome << "\n" << " Número de itens: " << combo3.numeroItens << "\n" << " Itens: " << combo3.item1 << ", " << combo3.item2 << "." << endl;
            cout << "\nEste combo custa.: R$" << combo3.valor << endl;
 
            cout << "-----------------------------------------------------" << endl;

            cout << "\nQual desses o(a) senhor(a) deseja? ";
            cin >> opc;

            switch(opc)
            {
                case 1:
                    cout << "Produto escolhido.: Combo 1" << endl;
                    cout << "\nQuantos o(a) senhor(a) vai querer? " << endl;
                    cin >> quantidade;
                    valorTotal = quantidade * combo1.valor;
                    cout << "\nSeu pedido irá custar R$" << valorTotal << ". Dirija-se ao caixa mais próximo..." << endl;
                    break;
                case 2:
                    cout << "Produto escolhido.: Combo 2" << endl;
                    cout << "\nQuantos o(a) senhor(a) vai querer? " << endl;
                    cin >> quantidade;
                    valorTotal = quantidade * combo2.valor;
                    cout << "\nSeu pedido irá custar R$" << valorTotal << ". Dirija-se ao caixa mais próximo..." << endl;
                    break;
                case 3:
                    cout << "Produto escolhido.: Combo 3" << endl;
                    cout << "\nQuantos o(a) senhor(a) vai querer? " << endl;
                    cin >> quantidade;
                    valorTotal = quantidade * combo3.valor;
                    cout << "\nSeu pedido irá custar R$" << valorTotal << ". Dirija-se ao caixa mais próximo..." << endl;
                    break;
            }
    }

    cout << "\nMuito obrigado! Volte sempre...\n\n";

    system("pause");
    return 0;
}