/*
EJERCICIO DOWHILE - Menu repetitivo con di while

Autor: Joustin Armas 
Fecha: 2026-20-10

Enunciado:
   Elaborar un programa de C++ que muestre un menu 
   repetitivo con las siguientes opciones:
      1. Sumar dos numeros.
      2. Mostrar la tabla de multiplicar de un numero.
      3. Salir 
   El programa debe repetirse hasta que el usuario elija 
   la opcion 3.
   Si el usuario ingresa una opcion invalida el programa 
   debe mostrar un mensaje de error y volver a mostrar el menu.

   E/P/S:

      Entrada: 
         Una opcion del menu 
         Segun la opcion elegidas 
             Dos numeros para sumar 
             O un numero para mostrar su tabla de multiplicar 
        

      Proceso: 
        Mostrar el menu
        Leer la opcion 
        Si la oopcion es 1:
           pedir dos numeros 
           sumarlos 
           mostrar el resultado 

        Si la opcion es 2:
           pedir un numero
           mostrar su tabla del 1 al 10 

        Si la opcion es 3:
           Mostrar un mansaje de salida 

        Si la opcion es 4: 
           Mostar menaje de error

        Repetir mientras la opcion sea diferente de 3 

       Salida:  
         Resultado de la suma 
         O la tabla de multiplicar
         O mensaje de error por opcion invalida 

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
   int opcion, num1, num2, suma, numero, i;

   do
   {
      cout <<"===== MENU ====="<< endl;
      cout <<"1. Suma dos numeros "<< endl;
      cout <<"2. Mostrar tabla de multipicar " << endl;
      cout << "Salir " << endl;
      cout << "Seleccione una opcion: " << endl;
      cin >> opcion; 
      
      if(opcion == 1){
        cout <<"Ingrese el primer numero: ";
        cin >> num1;

        cout <<"Ingrese el segundo numero: ";
        cin >>num2;

        suma = num1 + num2;

        cout << "La suma es : " << suma << endl;
      }else if (opcion == 2){

        cout << "Ingrese un numero: ";
        cin >> numero;

        for (i = 1; i <= 10; i++){
            cout << numero << "X" << i << "=" << numero * i << endl; 
        }
          } else if (opcion == 3){
            cout <<"Saliendo del programa... " << endl;
            
          } else {

            cout <<"Error: opcion invalida intente nuevamente.";
          }

   } while (opcion != 3); 

   return 0;


}
