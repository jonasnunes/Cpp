#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    // programa feito para auxílio em meu próprio comércio local

    float iguapeCompra, cascataiCompra, iguapeVenda, cascataiVenda, iguapeQtd, cascataiQtd, iguapeLucro, cascataiLucro, iguapeTotal, cascataiTotal;

    cout << "Qual o valor que você compra a água Iguapê? " << endl;
    cin >> iguapeCompra;
    cout << "Qual o valor que você compra a água Cascataí? " << endl;
    cin >> cascataiCompra;
    cout << "Por quanto você vende a água Iguapê? " << endl;
    cin >> iguapeVenda;
    cout << "Por quanto você vende a água Cascataí? " << endl;
    cin >> cascataiVenda;
    cout << "Quantas águas Iguapê você vendeu nesse mês? " << endl;
    cin >> iguapeQtd;
    cout << "Quantas águas Cascataí você vendeu nesse mês? " << endl;
    cin >> cascataiQtd;

    iguapeLucro = iguapeQtd * iguapeCompra;
    cascataiLucro = cascataiQtd * cascataiCompra;

    cout << "Seu lucro na Iguapê foi de R$ " << iguapeLucro << " reais." << endl;
    cout << "Seu lucro na Cascataí foi de R$ " << cascataiLucro << " reais." << endl;

    iguapeTotal = iguapeQtd * iguapeVenda;
    cascataiTotal = cascataiQtd * cascataiVenda;

    cout << "O valor total que você conseguiu com as vendas da Iguapê nesse mês foi de R$ " << iguapeTotal << " reais." << endl;
    cout << "O valor total que você conseguiu com as vendas da Cascataí nesse mês foi de R$ " << cascataiTotal << " reais." << endl;

    system("pause");
    return 0;
}