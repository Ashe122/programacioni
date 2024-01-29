//Angelyn Diaz

#include <iostream>
using namespace std;

int main() {
    cout << "****Bienvenido Personita****" << endl;

    // Aqui se declara la variable
    int calificacion;

   
    cout << "Por favor, ingresa el resultado de tu examen: "<< endl;
    cin >> calificacion;

    // Aqui se comprueba si el estudiante paso o no el examen
    if (calificacion >= 60) {
        cout << "¡Muy bien! Has aprobado el examen con " << calificacion << " puntos." << endl;
    } else {
        cout << "Lo siento. No has aprobado el examen" << endl;
        
         cout << "---------suerte para la próxima---------" << endl;
   
    }


    return 0;
}

