#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    int suma = 0;
    do {
        suma = 0;
        while (numero > 0) {
            suma += numero % 10;
            numero /= 10;
        }
        numero = suma;
    } while (suma >= 10);

    cout << "La suma de los dígitos es: " << suma << endl;

    return 0;
}