#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(nullptr)); 
    int numero_secreto = rand() % 100 + 1; 
    int intentos = 0;
    int intento_usuario;

    cout << "Bienvenido al juego de adivinar el número secreto entre 1 y 100." << endl;

    do {
        cout << "Ingrese su intento: ";
        cin >> intento_usuario;
        intentos++;

        if (intento_usuario < numero_secreto) {
            cout << "El número secreto es mayor." << endl;
        } else if (intento_usuario > numero_secreto) {
            cout << "El número secreto es menor." << endl;
        } else {
            cout << "¡Felicidades! Has adivinado el número secreto en " << intentos << " intentos." << endl;
        }
    } while (intento_usuario != numero_secreto);

    return 0;
}