/*

TAREA 8 - EJERCICIO 3: Area de un rectangulo

Autor: Joustin Armas 
Fecha: 2026-10-25

Enunciado: 
   Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
   Usa funciones para:
      • leer los datos,
      • calcular el área,
      • mostrar el resultado.
   El programa debe trabajar con valores reales si el usuario ingresa decimal.

*/

#include <iostream>
#include <string>

using namespace std;

void leerDatos(double &base, double &altura);
double calcularDatos(double base, double altura);
void mostrarResultados(double area);

int main(){

    double base, altura, area;

    leerDatos(base, altura);
    area = calcularDatos(base, altura);
    mostrarResultados(area);

    return 0;

}

void leerDatos(double &base, double &altura){

    cout <<"Para tu area ingresa:"<< endl;
    cout <<"Base: " << endl;
    cin >> base;
    cout <<"Altura: " << endl;
    cin >> altura;

}

double calcularDatos(double base, double altura){

    return base * altura; 

}

void mostrarResultados(double area){

    cout <<"Su area es: " << area << endl;
}

