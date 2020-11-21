#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    float n1, n2 = 1, res, opc;

    cout << "Selecione uma operação..." << "\n\n";
    cout << " [1] Soma [2] Subtração [3] Multiplicação [4] Divisão" << "\n\n";
    cin >> opc;
    cout << "\n";
    cout << "Digite um número para ver sua tabuada..." << "\n\n";
    cin >> n1;
    cout << "\n";

    if (opc == 1)
    {
        while (n2 <= 10)
            {
                res = n1 + n2;
                cout << n1 << " + " << n2 << " = " << res << endl;
                ++n2;
            }
    }

    else if (opc == 2)
    {
        while (n2 <= 10)
            {
                res = n1 - n2;
                cout << n1 << " - " << n2 << " = " << res << endl;
                ++n2;
            }
    }

    else if (opc == 3)
    {
        while (n2 <= 10)
            {
                res = n1 * n2;
                cout << n1 << " * " << n2 << " = " << res << endl;
                ++n2;
            }
        
    }

    else if (opc == 4)
    {
        while (n2 <= 10)
            {
                res = n1 / n2;
                cout << n1 << " / " << n2 << " = " << res << endl;
                ++n2;
            }
    }

    else
    {
        cout << "Opção Inválida!" << endl;
    }
    
    cout << "\n";

    system("pause");
    return 0;
}