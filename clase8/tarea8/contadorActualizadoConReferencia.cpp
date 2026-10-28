/*

TAREA 8 - EJERCICIO 5: Contador actualizado con referencia 

Autor: Joustin Armas 
Fecha: 2026-10-25

Enunciado:

   Desarrolla un programa que pida al usuario un número entero positivo n y luego
   incremente un contador desde 0 hasta n, usando una función que actualice el valor
   del contador.
   El objetivo es que practiques el uso de paso por referencia para modificar una
   variable desde una función.
   El programa debe mostrar el valor del contador en cada incremento.

*/

#include <iostream>
#include <string>

using namespace std;

void leerNumero(int &N);
void repetirNumero(int i, int N, int &contador);


int main(){

    int N, i, contador;

    leerNumero(N);
    repetirNumero(i, N, contador);

    return 0;


}

void leerNumero(int &N){

    cout <<"Ingrese un numero entero" << endl;
    cin >> N;

}

void repetirNumero(int i, int N, int &contador){

    contador = 1;

    while(contador <= N){

        cout << contador << endl;
        contador = contador + 1;
    }
}


