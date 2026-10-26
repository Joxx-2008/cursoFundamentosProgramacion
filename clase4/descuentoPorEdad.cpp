/*

TAREA 4 - EJERCICIO 3: DESCUENTO POR EDAD

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:
   Escribe un algoritmo que reciba la edad de una persona y determine el precio a pagar
   según estas reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor
   a 18, el precio es 2.50 dólares. El algoritmo debe mostrar el precio final.

E/P/S
   Entrada: 
      -Edad

    Proceso: 
       Definir consigna 

    Salida:
       Mostrar cuanto tiene que pagar

*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    int edad;

    cout <<"Ingrese su edad: "; 
    cin >> edad; 

    if(edad >= 18){

        cout <<"Su valor a pagar es de: 5$";

    }else{
        
        cout <<"Su valor a pagar es de: 2.50$";

    }

    return 0;

    
}
