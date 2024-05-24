#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    int suma = 0;
    int numero = 2; 

    int contador = 1; 
    while (contador <= n) { 
        suma += numero;
        numero += 2; 
        contador++;
    }

    cout << "La suma de los primeros " << n << " números pares es: " << suma << endl;

    return 0;
}