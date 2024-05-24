#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    int contador = 0;
    int numero;

    cout << "Ingrese una serie de números (ingrese un número negativo para terminar):" << endl;
    cin >> numero;

    while (numero >= 0) {
        suma += numero;
        contador++;
        cin >> numero;
    }

    if (contador > 0) {
        double promedio = static_cast<double>(suma) / contador;
        cout << "El promedio de los números ingresados es: " << promedio << endl;
    } else {
        cout << "No se ingresaron números válidos." << endl;
    }

    return 0;
}