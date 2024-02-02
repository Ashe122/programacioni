//HOJA DE TRABAJO 3
//Angelyn Judith Diaz Zeceña carne:5090-23-1407


#include <iostream> //  Esta es una biblioteca estándar de entrada/salida. 
#include <cmath> // Esta es una biblioteca para funciones matemáticas.
using namespace std;  // esta es una directiva

//  esta es una función que calcula la potencia de un número.
double calcularPotencia(double base, int exponente) {
    return pow(base, exponente);
}

// Función que verifica si un número es primo.
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;  // Los números menores o iguales a 1 no son primos.
    }
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false;  // Si tiene algún divisor distinto de 1 y él mismo, no es primo.
        }
    }
    return true;  // Si no se encontraron divisores, es primo.
}

// Función que verifica si un año es bisiesto.
bool esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Función que muestra el menú del programa.
// Función que muestra el encabezado del menú.
void mostrarEncabezado() {
    cout << "          Bienvenido al Menu       \n";
    cout << "********************************************\n";
}

// Función que muestra las opciones del menú.
void mostrarOpciones() {
    cout << "Seleccione una opcion:\n"; // Muestra un mensaje para indicar que se deben seleccionar opciones.
    cout << "1. Operaciones Aritmeticas\n";   // Muestra la opción 1: Operaciones Aritméticas.
    cout << "2. Calcular Potencia\n"; // Muestra la opción 2: Calcular Potencia.
    cout << "3. Verificar si un numero es primo\n";// Muestra la opción 3: Verificar si un número es primo.
    cout << "4. Verificar si un anio es bisiesto\n"; // Muestra la opción 4: Verificar si un año es bisiesto.
    cout << "5. Salir\n"; // Muestra la opción 5: Salir del programa.
    cout << "********************************************\n";  // Esta es una línea decorativa.
}


// Función que muestra el menú completo.
void mostrarMenu() {
    mostrarEncabezado();
    mostrarOpciones();


}

int main() {
    int opcion;  // Variable para almacenar la opción seleccionada por el usuario.
    do {
        mostrarMenu(); // Aqui se está llamando a la función mostrarMenu para mostrar las opciones disponibles.
        cout << "Opcion: ";
        cin >> opcion;  // Lee la opción ingresada por el usuario.

        switch (opcion) {
            case 1: {
                int num1, num2;
                cout << "Ingrese dos numeros enteros: ";
                cin >> num1 >> num2; // Lee dos números enteros ingresados por el usuario.


                // Realiza operaciones aritméticas básicas.
                int suma = num1 + num2;
                int resta = num1 - num2;
                int multiplicacion = num1 * num2;
                int division = (num2 != 0) ? (num1 / num2) : 0;

                // Muestra los resultados de las operaciones aritméticas.
                cout << "\nResultados de Operaciones Aritmeticas:\n";
                cout << "Suma: " << suma << endl;
                cout << "Resta: " << resta << endl;
                cout << "Multiplicacion: " << multiplicacion << endl;
                cout << "Division: " << division << endl;
                break;
            }
            case 2: {
                double base;
                int exponente;
                cout << "Ingrese la base y el exponente: ";
                cin >> base >> exponente; // Lee la base y el exponente ingresados por el usuario.


                // Calcula y muestra el resultado de la potencia.
                double resultado = calcularPotencia(base, exponente);
                cout << "\nResultado de Potencia:\n";
                cout << base << " elevado a " << exponente << " es: " << resultado << endl;
                break;
            }
            case 3: {
                int numero;
                cout << "Ingrese un número: ";
                cin >> numero; // Lee el número ingresado por el usuario.

                // Verifica si el número es primo y muestra el resultado.
                bool primo = esPrimo(numero);
                cout << "\nResultado:\n";
                cout << numero << " " << (primo ? "es primo." : "no es primo.") << endl;
                break;
            }
            case 4: {
                int year;
                cout << "Ingrese un año: ";
                cin >> year; // Lee el año ingresado por el usuario.

                // Verifica si el año es bisiesto y muestra el resultado.
                bool bisiesto = esBisiesto(year);
                cout << "\nResultado:\n";
                cout << year << " " << (bisiesto ? "es bisiesto." : "no es bisiesto.") << endl;
                break;
            }
            case 5: {
                cout << "Saliendo del programa...\n"; // Muestra un mensaje indicando que el programa está saliendo.
                break; // Sale del bucle do-while.
            }
            default:
                cout << "Opción no válida. Intente de nuevo.\n"; // Manejo por defecto para opciones no reconocidas.
        }

    } while (opcion != 5); // Continúa ejecutándose mientras la opción no sea 5 (Salir del programa).

    return 0; // Retorna 0 para indicar una terminación exitosa del programa.
}
