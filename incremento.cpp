#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    int x = 1, y = 1, a = 3, b = 5, z = a * ++b;

    cout << "Valor de x: " << x++ << endl; // incremeta 1 no valor de x mas não mostra o resultado
    cout << "Valor de x incrementado: " << x << endl; // mostra o valor de x incrementado

    cout << "Valor de y pré-incrementado: " << ++y << endl; // incrementa o valor de y e depois mostra na tela

    // exemplo bem simples, o mesmo ocorre no decremento

    cout << "Valor de z: " << z;

    return 0;
}
