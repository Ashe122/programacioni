//Angelyn Diaz

#include <iostream>
using namespace std;

int main() {
    cout << "--Hola Personita, verificaremos si eres mayor de edad.--" << endl;

    int edad;

    // Solicitar al usuario que ingrese su edad
    cout << "Por favor, ingresa tu edad: ";
    cin >> edad;

    //Se verifica si es mayor de edad
    if (edad >= 18) {
        cout << "Felicidades. Eres mayor de edad." << endl;
    } else {
        cout << "Lo siento. Al parecer eres aun menor de edad." << endl;
    }


    return 0;
}
