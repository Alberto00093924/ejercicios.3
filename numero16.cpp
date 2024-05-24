#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese un número entero: ";
    cin >> n;

    int contador = 0;
    for (int i = 1; i <= n; ++i) {
        if (esPrimo(i)) {
            contador++;
        }
    }

    cout << "Hay " << contador << " números primos entre 1 y " << n << endl;

    return 0;
}