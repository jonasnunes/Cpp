#include <iostream>
#include <locale>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    string nome;
    int idade;

    cout << "Olá, Seja muito bem vindo!" << endl;
    cout << "Qual é o seu nome?" << endl;
    cin >> nome;
    cout << "Quantos anos você tem?" << endl;
    cin >> idade;
    cout << "Muito obrigado " << nome << "!";

    return 0;
}