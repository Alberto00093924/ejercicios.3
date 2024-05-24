#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    bool es_primo = true;
    int divisor = 2;

    while (divisor <= sqrt(numero)) {
        if (numero % divisor == 0) {
            es_primo = false;
            break;
        }
        divisor++;
    }

    if (es_primo && numero > 1) {
        cout << numero << " es un número primo." << endl;
    } else {
        cout << numero << " no es un número primo." << endl;
    }

    return 0;
}