#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    double suma = 0.0;
    int i = 1;

    while (i <= n) {
        suma += 1.0 / i;
        i++;
    }

    cout << "La suma de las fracciones es: " << suma << endl;

    return 0;
}