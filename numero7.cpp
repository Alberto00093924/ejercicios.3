#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    cout << "Los dígitos del número son: ";
    while (numero > 0) {
        int digito = numero % 10;
        cout << digito << " ";
        numero /= 10;
    }
    cout << endl;

    return 0;
}