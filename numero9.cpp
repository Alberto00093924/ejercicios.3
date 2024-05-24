#include <iostream>

using namespace std;

int main() {
    const int pin_correcto = 1234;
    int pin;
    int opcion;
    int saldo = 1000;

    do {
        cout << "Ingrese su PIN: ";
        cin >> pin;

        if (pin == pin_correcto) {
            cout << "Bienvenido al cajero automático." << endl;
            do {
                cout << "1. Consultar saldo" << endl;
                cout << "2. Retirar dinero" << endl;
                cout << "3. Salir" << endl;
                cout << "Seleccione una opción: ";
                cin >> opcion;

                switch (opcion) {
                    case 1:
                        cout << "Su saldo actual es: $" << saldo << endl;
                        break;
                    case 2:
                        int cantidad;
                        cout << "Ingrese la cantidad a retirar: $";
                        cin >> cantidad;
                        if (cantidad <= saldo) {
                            saldo -= cantidad;
                            cout << "Retiro exitoso. Su saldo actual es: $" << saldo << endl;
                        } else {
                            cout << "Fondos insuficientes." << endl;
                        }
                        break;
                    case 3:
                        cout << "Gracias por usar nuestro cajero automático." << endl;
                        break;
                    default:
                        cout << "Opción inválida." << endl;
                }
            } while (opcion != 3);
        } else {
            cout << "PIN incorrecto. Inténtelo de nuevo." << endl;
        }
    } while (pin != pin_correcto);

    return 0;
}