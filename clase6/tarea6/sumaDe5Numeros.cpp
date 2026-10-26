/*

TAREA 6 - EJERCICIO 2: SUMA DE 5 NUMEROS

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:

   Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
   suma total de esos valores.

*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    int numero, suma, i;

    suma = 0;

    for(i = 1; i <= 5; i++){

        cout <<"Ingrese el numero" << i << ": "; 
        cin >> numero;

        suma = suma + numero; 

    }

    cout <<"La suma total es: " << suma << endl; 

    return 0; 
    
}


