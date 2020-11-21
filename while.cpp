#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    int count = 1;

    while(count <= 10) // enquanto count for menor ou igual a 10, incremente 1 ao seu valor
    {
        cout << count << endl; // mostra o valor de count na tela
        count++; // incrementa 1 ao valor da variável count
    }

    system("pause");
    return 0;
}