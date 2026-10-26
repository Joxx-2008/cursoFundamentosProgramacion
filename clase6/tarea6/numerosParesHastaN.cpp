/*
TAREA 6 - EJERCICIO 1: NUMEROS PARES HASTA N

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:
   Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
   muestre en pantalla todos los números pares desde 1 hasta N.

   Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
   de error.

*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    int contador, numero;

    cout <<"Ingrese un numero positivo: "; 
    cin >> numero;

    if(numero >= 0){

        contador = 1;

        while(contador <= numero){

            cout << contador << endl;

            contador = contador + 1;

        }

    }else{

        cout <<"ERROR:Numero ingresado incorrecto";

    }
    return 0;
    
}

