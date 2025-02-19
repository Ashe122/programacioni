#include <iostream>

float obtenerEntrada(const std::string& mensaje) {
    float valor;
    std::cout << mensaje;
    std::cin >> valor;
    return valor;
}

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: No es posible dividir por cero." << std::endl;
        return 0;
    }
}

int main() {
    float valor1 = obtenerEntrada("Ingrese el primer valor: ");
    float valor2 = obtenerEntrada("Ingrese el segundo valor: ");

    std::cout << "Resultado de la suma: " << suma(valor1, valor2) << std::endl;
    std::cout << "Resultado de la resta: " << resta(valor1, valor2) << std::endl;
    std::cout << "Resultado de la multiplicacion: " << multiplicacion(valor1, valor2) << std::endl;
    std::cout << "Resultado de la division: " << division(valor1, valor2) << std::endl;

    return 0;
}
