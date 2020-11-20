#include <iostream>
#include <locale>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    cout << "Olá, Mundo!";

    return 0;
}
