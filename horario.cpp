#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    int hora;

    cout << "Digite a hora atual.: " << endl;
    cin >> hora;

    if(hora >= 0 && hora < 12)

    {
        cout << "Bom dia!" << endl;
    }

    else if(hora >= 12 && hora < 18)

    {
        cout << "Boa tarde!" << endl;
    }

    else if(hora >= 18 && hora < 24)

    {
        cout << "Boa noite!" << endl;
    }
    
    else

    {
        cout << "Opção Inválida!" << endl;
    }

    system("pause");
    return 0;
}