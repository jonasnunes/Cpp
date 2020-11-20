#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    string nome;
    int anoNasc, anoAtual, res;

    cout << "Qual é o seu nome? " << endl;
    cin >> nome;
    cout << "\nEm que ano você nasceu? " << endl;
    cin >> anoNasc;
    cout << "\nQual ano atual? " << endl;
    cin >> anoAtual;
    res = anoAtual - anoNasc;
    cout << "\nOlá! " << nome << " você tem " << res << " anos de idade.\n\n";

    system("pause");
    return 0;
}