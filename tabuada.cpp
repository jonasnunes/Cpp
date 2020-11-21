#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    int n1, n2 = 1, res;
    // tabuada de multiplicação 1 a 10 usando while
    cout << "Digite um número para ver sua tabuada..." << "\n\n";
    cin >> n1;
    cout << "\n";

    while(n2 > 0 && n2 <= 10) // enquanto n2 for maior que zero e menor ou igual a 10
    {
        res = n1 * n2;
        cout << n1 << " * " << n2 << " = " << res << endl;
        ++n2;
    }

    system("pause");
    return 0;

}