#include <iostream>
#include <locale>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    string nome, mes;
    int dia, ano;

    cout << "Olá, Seja muito bem vindo!" << endl;
    cout << "Qual é o seu nome?" << endl;
    cin >> nome;
    cout << "Em que dia você nasceu?" << endl;
    cin >> dia;
    cout << "De qual mês? " << endl;
    cin >> mes;
    cout << "Em qual ano? " << endl;
    cin >> ano;
    cout << "Muito obrigado! " << nome << ", você nasceu no dia " << dia << " do mês de " << mes << " no ano de " << ano << endl;

    return 0;
}