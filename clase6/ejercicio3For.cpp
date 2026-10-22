/*
EJERCICIO FOR - Acumulador con for 

Autor: Joustin Armas 
Fecha: 2026-20-10

Enunciado:
   Elabora un programa en C++ que solicite al usuario 5 numneros
   entero y calcule la suma total de esos numeros usando un bucle FOR.
   Al final tiene que mostrar el resultado acumulado.


   
   
   E/P/S:

      Entrada: 5 numeros enteros ingresados por el usuario.

      Proceso: 
         Inicializar una variable suma en 0
         Repetir 5 veces
         Pedir un numero 
         Leer el numero 
         Sumar el valor en el acumulador 
        Al final, mostrar la suma total 

       Salida:  
         La suma total de lols 5 numeros ingresados.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
     int i, numero, suma;

     suma= 0;

     for(i = 1; i <= 5; i++){

        cout <<"Ingrese el numero " << i << ": ";

        cin >> numero; 

        suma= suma + numero; 
     }

     cout <<"La suma total es:" << suma << endl;
      return 0;

}