/*

TAREA 4 - EJERCICIO 4: NOTA FINAL CON PONDERACIONES 

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:
   Escribe un algoritmo que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
   Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale
   el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la
   nota final.
E/P/S
   Entrada: 
      -Parcial 1
      -Parcial 2
      -Proyecto

    Proceso: 
       Calcular los datos ingresados con las ponderaciones.

    Salida:
       Mostrar su nota final:

*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    double Parcial1,Parcial2, Proyecto, notafinal;

    cout <<"Ingrese su nota del Primer Parcail: " << endl;
    cin >> Parcial1;

    cout <<"Ingrese su nota del Segundo Parcial: " << endl;
    cin >> Parcial2;

    cout <<"Ingrese su nota del Proyecto: " << endl; 
    cin >> Proyecto;

    if(Parcial1 >= 0 && Parcial2 >= 0 && Proyecto >= 0){

        notafinal = Parcial1 * 0.3 + Parcial2 * 0.3 + Proyecto * 0.4;

        cout <<"Su nota final es: " << notafinal; 

    }else{

        cout <<"Su nota ingresada es invalida"; 

    }

    return 0;


}

