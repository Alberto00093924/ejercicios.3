#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números naturales: ";
    cin >> n;

    int menor_que_15 = 0;
    int mayor_que_50 = 0;
    int entre_25_y_45 = 0;
    int numero;

    int contador = 0;
    while (contador < n) {
        cout << "Ingrese el número " << contador + 1 << ": ";
        cin >> numero;

        if (numero < 15) {
            menor_que_15++;
        } else if (numero > 50) {
            mayor_que_50++;
        } else if (numero >= 25 && numero <= 45) {
            entre_25_y_45++;
        }

        contador++;
    }

    cout << "Cantidad de números menores que 15: " << menor_que_15 << endl;
    cout << "Cantidad de números mayores que 50: " << mayor_que_50 << endl;
    cout << "Cantidad de números en el rango entre 25 y 45: " << entre_25_y_45 << endl;

    return 0;
}