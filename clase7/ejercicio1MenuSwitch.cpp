/*
EJERCICIO 1 - Menu simple con switch 

Autor: Joustin Armas 
Fecha: 2026-10-21

Switch: Es una estrtuctura de seleccion que permite ejecutar diferentes 
bloques de codigo segun el valor de una variable 

Suele ser util: 
   -Hay varias opciones numeros o fijas 
   - Se requiere organizar el menu 
   - Cada opcion representa un caso distinto 

Diferencia rapido con if/else 
   - if/else sirve mas cuando las condiciones pueden ser variadas o complejas 
   - switch sirve mas cuando comparas una sola variable contra varios valores complejos 

Enunciado: Elaborar un programa en C++ que muestre un menu con las siguientes opciones:
   Mostrar mansaje de bienvenida 
   Mostrar el cuadrado de un numero 
   Salir 

   El programa debe repetirse hasta que el usuario elija la opcion 3
   Si el usuario ingresa una opcion invalida, el programa debe mostrar un mansaje de error y volver a mostrar

   E/P/S:

      Entrada: 
         Una opcion del menu 
         Si elije la opcion 2, mostrar numero entero

      Proceso:
         Mostrar menu 
         Leer opcion 
         Evaluar la opcion con switch 
         Ejecutar la accion correspondiente 
         Repetir hasta que el usuario elija salir 

      Salida: 
         Mensaje de bienvenida 
         El cuadrado de un numrero 
         Mensaje de salida 
         Mensaje de error por opcion invalida 

*/

#include <iostream>
#include <string>

using namespace std;

int main (){

    int opcion;
    int numero, cuadrado; 

    do{ 
        cout << "==== Menu con Switch ====" << endl;
        cout << "1. Mostrar bienvenida " << endl;
        cout << "2. Mostrar cuadrado de un numero " << endl;
        cout << "3. Salir " << endl;
        cout << "SELECCIONE UNA OPCION: " << endl;

        cin >> opcion; 

        switch(opcion){
            case 1 :
               cout << "Bienvenido al menu con Switch" << endl;
               break; 
            case 2: 
               cout <<"Ingrese un numero: " << endl; 
               cin >> numero;

               cuadrado = numero * numero;

               cout << "El cuadrado es: " << cuadrado << endl;
               break; 

            case 3: 
               cout << "Saliendo del programa... " << endl;
               break; 

            default:
               cout << "Error: opcion invalida." << endl; 
        
        }

    }while(opcion != 3);
    return 0; 
}
