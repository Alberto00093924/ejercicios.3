#include <iostream>

using namespace std;

int main() {
    const int numero_de_oro = 8;
    int intento;
    int intentos_totales = 0;

    do {
        cout << "Ingrese un número del 1 al 10 para adivinar el número de oro: ";
        cin >> intento;
        intentos_totales++;

        if (intento != numero_de_oro) {
            cout << "Intenta de nuevo. ¡Ese no es el número de oro!" << endl;
        }
    } while (intento != numero_de_oro);

    cout << "¡Felicidades! Has adivinado el número de oro en " << intentos_totales << " intentos." << endl;

    return 0;
}