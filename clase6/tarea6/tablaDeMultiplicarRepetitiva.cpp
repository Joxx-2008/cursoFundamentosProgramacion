/*

TAREA 6 - EJERCICIO 3: TABLA DE MULTIPLICACION REPETITIVA 

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:

   Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
   tabla de multiplicar del 1 al 10.
   Al final, el programa debe mostrar un mensaje indicando que la tabla fue generada
   correctamente.

*/

#include <iostream> 
#include <string>

using namespace std; 

int main(){

    int numero, i; 

    cout <<"Ingrese el numero del cual quiere la tabla: ";
    cin >> numero; 

    if(numero >= 0){

    for(i = 1; i <= 10; i++){

        cout << numero << "X" << i << ":" << numero * i << endl; 

    }

    cout <<"Tabla generada correctamente";


    }else{
        cout <<"Numero ingresado invalido.";

    }
    return 0;


}

  