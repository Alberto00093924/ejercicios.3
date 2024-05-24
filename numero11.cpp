#include <iostream>

using namespace std;

int main() {
    const double tasa_conversion = 0.85;
    double dolares;

    do {
        cout << "Ingrese la cantidad de dólares a convertir (ingrese un valor negativo para salir): ";
        cin >> dolares;

        if (dolares >= 0) {
            double euros = dolares * tasa_conversion;
            cout << "$" << dolares << " equivale a €" << euros << endl;
        }
    } while (dolares >= 0);

    cout << "Gracias por utilizar nuestro convertidor de moneda." << endl;

    return 0;
}