#include <iostream>

using namespace std;  

// Función para obtener un valor float desde la entrada estándar
float obtenerEntrada(const string& mensaje) {
    float valor;
    cout << mensaje;  // Mostrar el mensaje al usuario
    cin >> valor;     // Leer el valor desde la entrada estándar
    return valor;     // Devolver el valor ingresado
}

// Aquí empiezan las operaciones  básicas

// Función de suma
float suma(float a, float b) {
    return a + b;
}

// Función de resta
float resta(float a, float b) {
    return a - b;
}

// Función de multiplicación
float multiplicacion(float a, float b) {
    return a * b;
}

// Función de división con manejo de división por cero
float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: No es posible dividir por cero." << endl;  // Imprimir un mensaje de error
        return 0;  // Devolver 0 en caso de división por cero
    }
}

// Función principal
int main() {
    //  Se Obtienen dos valores de parte del usuario
    float valor1 = obtenerEntrada("Ingrese el primer valor: ");
    float valor2 = obtenerEntrada("Ingrese el segundo valor: ");

    // Realizar operaciones y mostrar resultados
    cout << "Resultado de la suma: " << suma(valor1, valor2) << endl;
    cout << "Resultado de la resta: " << resta(valor1, valor2) << endl;
    cout << "Resultado de la multiplicacion: " << multiplicacion(valor1, valor2) << endl;
    cout << "Resultado de la division: " << division(valor1, valor2) << endl;

    return 0;  // Indica que el programa se ejecutó correctamente
}
//finalizó el programa
