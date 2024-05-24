#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    int producto = 1;
    while (numero > 0) {
        producto *= numero % 10;
        numero /= 10;
    }

    cout << "El producto de los dígitos es: " << producto << endl;

    return 0;
}