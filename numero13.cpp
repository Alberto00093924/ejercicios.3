#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string palabras[] = {"computadora", "programacion", "lenguaje", "algoritmo", "openai", "inteligencia", "artificial"};
    const int num_palabras = sizeof(palabras) / sizeof(palabras[0]);
    srand(time(nullptr));
    string palabra_secreta = palabras[rand() % num_palabras];

    const int max_intentos = 6;
    int intentos_restantes = max_intentos;
    string palabra_adivinada(palabra_secreta.length(), '_');

    cout << "Bienvenido al juego de ahorcado. Adivina la palabra secreta." << endl;

    do {
        cout << "Palabra: " << palabra_adivinada << endl;
        cout << "Intentos restantes: " << intentos_restantes << endl;

        char letra;
        cout << "Ingresa una letra: ";
        cin >> letra;

        bool letra_encontrada = false;
        for (int i = 0; i < palabra_secreta.length(); ++i) {
            if (palabra_secreta[i] == letra) {
                palabra_adivinada[i] = letra;
                letra_encontrada = true;
            }
        }

        if (!letra_encontrada) {
            cout << "La letra no está en la palabra." << endl;
            intentos_restantes--;
        }

    } while (intentos_restantes > 0 && palabra_adivinada != palabra_secreta);

    if (palabra_adivinada == palabra_secreta) {
        cout << "¡Felicidades! Has adivinado la palabra secreta: " << palabra_secreta << endl;
    } else {
        cout << "Lo siento, te has quedado sin intentos. La palabra secreta era: " << palabra_secreta << endl;
    }

    return 0;
}