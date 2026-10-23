/*

EJERCICIO 1 - ARREGLOS 1D: CARGAR Y RECORRER

Autor: Joustin Armas 
Fecha: 2026-10-19

Enunciado:
   Realizar un programa en C++ que permita ingresar 5 notas enteras en un arreglo
   LUego, el programa debe mostrar todas la notas ingresadas, una por una, indicando
   tambien la posicion en la que fueron guardadas.

*/
#include <iostream> 
#include <string>

using namespace std;
int main(){
    int notas[5];
    int i;

    for(i = 0; i < 5; i++){

    cout <<"Ingrese la nota" << i + 1 << ": " ; 
    cin >> notas[i];

    }

    cout << endl; 
    cout << "Notas registradas: " << endl; 

    for(i = 0; i < 5; i++){

        cout << "Posicion" << i << ": " << notas[i] << endl; 
    }

    return 0; 

} 