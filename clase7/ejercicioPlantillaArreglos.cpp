/*
EJERCICIO: PLANTILLA - ARREGLOS

Autor: Joustin Armas
Fecha: 2026-10-22

-El arreglo guarda los datos
-El indice nos dice en que posicion estamos 
-El for nos ayuda a movermos en todas las posiciones 

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int datos[5];
    int i;

    for(i = 0; i < 5; i++){

        cout << "Ingrese el numeroa guardar " << i + 1 << endl; 
        cin >> datos[i];
    }
    for(i = 0; i < 5; i++){
        cout << datos[1] << endl;
    }

    return 0; 
}
