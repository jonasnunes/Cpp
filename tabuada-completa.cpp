#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    float n;
    int op;

    cout << "Selecione uma operação: \n\n[1] Soma \n[2] Subtração \n[3] Multiplicação \n[4] Divisão\n\n";
    cin >> op;

    cout << "\nDigite um número para ver a sua tabuada: ";
    cin >> n;
    cout << "\n";

    switch(op)
    {
        case 1:
            for(int i = 1; i <= 10; i++)
            {
                cout << n << " + " << i << " = " << n + i << endl;
            }
        break;

        case 2:
            for(int i = 1; i <= 10; i++)
            {
                cout << n << " - " << i << " = " << n - i << endl;
            }
        break;

        case 3:
            for(int i = 1; i <= 10; i++)
            {
                cout << n << " x " << i << " = " << n * i << endl;
            }
        break;

        case 4:
            for(int i = 1; i <= 10; i++)
            {
                cout << n << " / " << i << " = " << n / i << endl;
            }
        break;

        default:
        {
            cout << "\nOpção Inválida!\n";
        }
    }

    return 0;
}