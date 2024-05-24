#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    const int numero_secreto = rand() % 100 + 1;
    int intento;
    int intentos_totales = 0;

    cout << "Bienvenido al juego de adivinanza. Debes adivinar un número del 1 al 100 en un máximo de 5 intentos." << endl;

    while (intentos_totales < 5) {
        cout << "Intento #" << intentos_totales + 1 << ": ";
        cin >> intento;

        if (intento == numero_secreto) {
            cout << "¡Felicidades! Has adivinado el número secreto." << endl;
            break;
        } else {
            cout << "Intenta de nuevo." << endl;
        }

        intentos_totales++;
    }

    if (intentos_totales == 5) {
        cout << "Lo siento, has agotado tus intentos. El número secreto era: " << numero_secreto << endl;
    }

    return 0;
}