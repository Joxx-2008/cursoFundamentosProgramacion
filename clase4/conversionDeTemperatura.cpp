/*

TAREA 4 - EJERCICIO 1: CONVERSION DE TEMPERATURA

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:
   Escribe un algoritmo que reciba una temperatura en grados Celsius y la convierta a
   grados Fahrenheit. El algoritmo debe mostrar el valor final en Fahrenheit. Usa la
   conversión estándar entre Celsius y Fahrenheit. Usa la conversión F = (C × 9/5) + 32.

E/P/S
   Entrada: 
      -Grados celcius 

    Proceso: 
       Convertir grados celcius a grados fahrenhiet 

    Salida:
       Mostrar valor de grados fahrenheit 
*/

#include <iostream>
#include <string>

using namespace std; 

int main(){

    double celcius, fahrenheit;

    cout <<"Ingrese sus grados celcius: " << endl;
    cin >> celcius; 

    if(celcius >= 0){

        fahrenheit = (celcius * 9/5 ) + 32;

        cout <<"Su resultado en grados fahrenheit es: " << fahrenheit << endl; 

    }else{

        cout << "Su valor ingresado es invalido" << endl; 

    } 
    
    return 0; 
    
}



