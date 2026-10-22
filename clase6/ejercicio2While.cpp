/*
EJERCICIO WHILE - Contador don while 

Autor: Joustin Armas 
Fecha: 2026-20-10

Enunciado:
   Elaborar un programa de C++ quee solicite al usuario 
   un numero entero positivo N y muestre en pantalla 
   desde el 1 hasta N usando bucle while 

   Si el usuario ingresa un valor fuera del rango,
    el programa debe de mostrar mensaje de error y terminar.

   E/P/S:

      Entrada: Un numero entero positivo N

      Proceso: 
         Leer el valor de N
         Verificar  si el valor de N es mayor de 0
         Si no lo es, mostrar mensaje de error 
         Si lo es, usar un contador que inicie en 1
         Repertir mientras el contador sea menor igual que N 
         Mopstrar el valor del contador 
         Aumentar el contador en 1 en cada vuelta 

       Salida:  
         Los numeros del 1 hasta N.
         O un mensaje de error si el numero ingresado no es valido.
   
*/

#include <iostream>
#include <string>

using namespace std;

int main (){ 

  // De claramos las variables necesarias 
   int N, contador;

  // Pedimos al usuario un numero entero positivo 
   cout <<"Ingrese un  numero entero positivo: ";
   cin >> N;

  // Validamos que el numero sea mayor que 0 
   if (N <= 0)
    {
      // Si el numero no es valido, mostamos error 
      cout <<"Error: el numero tiene que ser mayor que 0." <<endl;
   }
   else
   {
      // Inciamos en contador en 1 
      contador = 1;

      // Repetimos mienttras el contador sea menor o igual que a N
      while (contador <= N){

         // Mostramos el valor actual del contador    
         cout << contador << endl;

         // Aumentamos el contador para evitar bucles infinitos
         contador = contador +1;
      }
      return 0;
   }
     
}









