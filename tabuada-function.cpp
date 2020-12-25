#include <iostream>
#include <locale>

using namespace std;

void soma();
void subtracao();
void multiplicacao();
void divisao();


int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    soma();
    subtracao();
    multiplicacao();
    divisao();

    return 0;
}

void soma()
{
    int n1;

    cout << "Tabuada de Somar...\n";
    cout << "Digite um número para ver sua tabuada.: ";
    cin >> n1;
    cout << "\n";

    for(int n = 1; n <= 10; n++)
    {
        int res = n1 + n;
        cout << n1 << " + " << n << " = " << res << endl;
    }

}

void subtracao()
{
    int n1;

    cout << "\nTabuada de Subtração...\n";
    cout << "Digite um número para ver sua tabuada.: ";
    cin >> n1;
    cout << "\n";

    for(int n = 1; n <= 10; n++)
    {
        int res = n1 - n;
        cout << n1 << " - " << n << " = " << res << endl;
    }
}

void multiplicacao()
{
    int n1;

    cout << "\nTabuada de Multiplicação...\n";
    cout << "Digite um número para ver sua tabuada.: ";
    cin >> n1;
    cout << "\n";

    for(int n = 1; n <= 10; n++)
    {
        int res = n1 * n;
        cout << n1 << " x " << n << " = " << res << endl;
    }
}

void divisao()
{
    double n1;

    cout << "\nTabuada de Divisão...\n";
    cout << "Digite um número para ver sua tabuada.: ";
    cin >> n1;
    cout << "\n";

    for(int n = 1; n <= 10; n++)
    {
        double res = n1 / n;
        cout << n1 << " / " << n << " = " << res << endl;
    }
}