/*

TAREA 8 - EJERCICIO 4: Intercambio de dos numeros

Autor: Joustin Armas 
Fecha: 2026-10-25

Enunciado:
   Desarrolla un programa que permita ingresar dos números enteros y luego
   intercambiar sus valores usando una función.
   El programa debe:
      • mostrar los valores antes del intercambio,
      • realizar el intercambio usando una función,
      • mostrar los valores después del intercambio.

*/

#include <iostream>
#include <string>

using namespace std;

void leerNumeros(int &n1, int &n2);
void realizarIntercambio(int n1, int n2);
void mostrarValores(int n1, int n2);

int main(){

    int n1, n2, antes, despues;

    leerNumeros(n1, n2);
    realizarIntercambio(n1, n2);
    mostrarValores(n1, n2);

    return 0;

}

void leerNumeros(int &n1, int &n2){

    cout <<"Ingrese dos numeros enteros: "<< endl;
    cin >> n1 >> n2;

}

void realizarIntercambio(int n1, int n2){

    cout <<"Tus valores antes del intercambio: " << endl << n1 << endl << n2 << endl;

}

void mostrarValores(int n1, int n2){

    cout <<"Tus valores intercambiados son: " << endl << n2 << endl << n1 <<endl;
    
}
