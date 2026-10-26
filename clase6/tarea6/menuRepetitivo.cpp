/*

TAREA 6 - EJERCICIO 4: MENU REPETITIVO

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:

   Elaborar un programa en C++ que muestre el siguiente menú:
      1. Mostrar el doble de un número
      2. Mostrar el triple de un número
      3. Salir
   El programa debe repetirse hasta que el usuario elija la opción 3.
   Si el usuario ingresa una opción inválida, el programa debe mostrar un mensaje de
   error y volver a mostrar el menú.
   
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    int numero, cuadrado, opcion, cubo;

    do{

        cout <<"=== MENU ===" << endl; 
        cout <<"1.Mostrar el doble de un numero"<< endl;
        cout <<"2.Mostrar el tripe de un numero"<< endl;
        cout <<"3.Salir"<< endl;
        cin >> opcion;

        if(opcion == 1){

            cout <<"Ingrese el numero: ";
            cin >> numero;

            cuadrado = numero * 2;

            cout <<"El doble de su numero es: " << cuadrado << endl;

        }else if(opcion == 2){

            cout <<"Ingrese el numero: ";
            cin >> numero;

            cubo = numero * numero *numero;
            cout <<"El triple de su numero es:" << cubo << endl;

        }else if(opcion == 3){

            cout <<"Saliendo..." << endl;

        }

    }while(opcion != 3);

    return 0;
}

