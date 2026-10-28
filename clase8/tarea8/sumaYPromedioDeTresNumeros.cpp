/*

TAREA 8 - EJERCICIO 1: Suma y promedio de tres numeros 

Autor: Joustin Armas 
Fecha: 2026-10-25

Enunciado: 
   Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
   para:
      • leer los números,
      • calcular la suma,
      • calcular el promedio,
      • mostrar los resultados.

*/

#include <iostream>
#include <string>

using namespace std;

void leerTresNumeros (int &n1, int &n2, int &n3);
int calcularSuma (int n1, int n2, int n3);
double calcularPromedio (int suma);
void mostrarPromedio (int suma, double promedio);


int main(){

    int n1, n2, n3, suma; 
    double promedio;

    leerTresNumeros (n1, n2, n3);

    suma = calcularSuma (n1, n2, n3);

    promedio = calcularPromedio (suma);

    mostrarPromedio (suma, promedio);

    return 0;

}

void leerTresNumeros (int &n1, int &n2, int &n3){
    cout <<"Ingrese los numero: ";
    cin >> n1 >> n2 >> n3;

}

int calcularSuma (int n1, int n2, int n3){

    return n1 + n2 + n3;

}

double calcularPromedio (int suma){

    return suma / 3.0;

}

void mostrarPromedio (int suma, double promedio){

    cout <<"Sus resultados son:" << endl;
    cout <<"Suma:" << suma << endl;
    cout <<"Promedio: " << promedio << endl;
}

