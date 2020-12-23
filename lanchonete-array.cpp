#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    // mesmo exemplo da lanchonete, mas usando array ao invés de struct.

    string comboNome[] = {"Prata da Casa", "+ Light", "Lanche Pobre"};
    int numeroItens[] = {4, 3, 2};
    string comboItens[] = {"X-Tudo", "Batata Frita", "Pastel", "Coca lata", "X-Frango", "Batata Frita", "Fanta Laranja", "Hamburguer", "Coca lata"};
    double comboValor[] = {49.90, 32.50, 19.90};

    string nome;
    long long int codigoCliente; 
    int opc, qtd;
    double valorTotal;

    cout << "Bem vindo ao Big Lanches!" << endl;
    cout << "Não perca tempo... Faça já o seu pedido!" << endl;
    cout << "Qual é o seu nome? ";
    cin.ignore();
    getline(cin, nome);
    cout << "Digite o código do cliente.: ";
    cin >> codigoCliente;
    cout << "Pressione 1 para ver o nosso cardápio.: ";
    cin >> opc;

    switch(opc)
    {
        case 1:
            cout << "\nCombo 1" << endl;
            cout << "Nome do combo.: " << comboNome[0] << "\n" << "Número de Itens.: " << numeroItens[0] << "\n" << "Itens.: " << comboItens[0] << ", " << comboItens[1] << ", " << comboItens[2] << ", " << comboItens[3] << ".\n";

            cout << "-----------------------------------------------------" << endl;

            cout << "\nCombo 2" << endl;
            cout << "Nome do combo.: " << comboNome[1] << "\n" << "Número de Itens.: " << numeroItens[1] << "\n" << "Itens.: " << comboItens[4] << ", " << comboItens[5] << ", " << comboItens[6] << ".\n";
            
            cout << "-----------------------------------------------------" << endl;

            cout << "\nCombo 3" << endl;
            cout << "Nome do combo.: " << comboNome[2] << "\n" << "Número de Itens.: " << numeroItens[2] << "\n" << "Itens.: " << comboItens[7] << ", " << comboItens[8] << ".\n";

            cout << "-----------------------------------------------------" << endl;

            cout << "\nQual desses o(a) Senhor(a) deseja?" << endl;
            cin >> opc;

            switch(opc)
            {
                case 1:
                    cout << "\nProduto escolhido.: Combo 1" << endl;
                    cout << "Quantos o(a) Senhor(a) vai querer? " << endl;
                    cin >> qtd;
                    valorTotal = qtd * comboValor[0];
                    cout << "\nSeu pedido irá custar R$ " << valorTotal << ". Dirija-se ao caixa mais próximo." << endl;
                break;

                case 2:
                    cout << "\nProduto escolhido.: Combo 2" << endl;
                    cout << "Quantos o(a) Senhor(a) vai querer? " << endl;
                    cin >> qtd;
                    valorTotal = qtd * comboValor[1];
                    cout << "\nSeu pedido irá custar R$ " << valorTotal << ". Dirija-se ao caixa mais próximo." << endl;
                break;

                case 3:
                    cout << "\nProduto escolhido.: Combo 3" << endl;
                    cout << "Quantos o(a) Senhor(a) vai querer? " << endl;
                    cin >> qtd;
                    valorTotal = qtd * comboValor[2];
                    cout << "\nSeu pedido irá custar R$ " << valorTotal << ". Dirija-se ao caixa mais próximo." << endl;
                break;

                default:
                    cout << "\nOpção Inválida!" << endl;
            }
    }

    cout << "\nMuito obrigado! Volte sempre...\n\n";

    system("pause");
    return 0;
}