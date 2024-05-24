#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    int contador = 1;
    while (contador <= 10) {
        cout << numero << " x " << contador << " = " << numero * contador << endl;
        contador++;
    }

    return 0;
}