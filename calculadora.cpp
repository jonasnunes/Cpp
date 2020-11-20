#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    int n1, n2, res, opc;

    cout << "Calculadora digital..." << endl;
    cout << "Selecione uma operação matemática..." << endl;
    cout << "1 - Soma 2 - Subtração 3 - Multiplicação 4 - Divisão" << endl;
    cin >> opc;

    if(opc == 1)

    {
        cout << "Digite um número: ";
        cin >> n1;
        cout << "Digite outro número: ";
        cin >> n2;
        res = n1 + n2;
        cout << "A soma entre " << n1 << " e " << n2 << " é igual a " << res << endl;
    }

    else if(opc == 2)

    {
        cout << "Digite um número: ";
        cin >> n1;
        cout << "Digite outro número: ";
        cin >> n2;
        res = n1 - n2;
        cout << "A subtração entre " << n1 << " e " << n2 << " é igual a " << res << endl;
    }

    else if(opc == 3)

    {
        cout << "Digite um número: ";
        cin >> n1;
        cout << "Digite outro número: ";
        cin >> n2;
        res = n1 * n2;
        cout << "A multiplicação entre " << n1 << " e " << n2 << " é igual a " << res << endl;
    }

    else if(opc == 4)

    {
        cout << "Digite um número: ";
        cin >> n1;
        cout << "Digite outro número: ";
        cin >> n2;
        res = n1 / n2;
        cout << "A divisão entre " << n1 << " e " << n2 << " é igual a " << res << endl;
    }

    else

    {
        cout << "Opção Inválida!";
    }
    
    system("pause");
    return 0;
}