/*

EJERCICIO 3: CALCULAR LA SUMA Y PROMEDIO DE 4 NUMEROS USANDO FUNCIONES 

Autor: Joustin Armas 
Fecha: 2026-10-21

Enunciado:
   Desarrollar un progrma en C++ que permita ingresar 4 numeros enteros 
   El programa debe usar funciones para: 
      Leer los 4 numeros,
      Calcular suma,
      Calcular promedio,
      Mostrar los resultados.
    El objetivo es comprender como dividir un problema en varias funciones
    tareas claras. 

*/

#include <iostream>
#include <string>

using namespace std;

void leerCuatroNumeros(int &a, int &b, int &c, int &d);
int calcularSuma(int a, int b, int c, int d);
double calcularPromedio (int suma);
void mostrarResultados (int suma, double promedio);

int main(){
    //Variables donde se guardaran los numeros
    int n1, n2, n3, n4; 
    //Variables para resultados
    int suma;
    double promedio; 

    //Llamamos a la funcion que lee a los 4 numeros 
    leerCuatroNumeros(n1, n2, n3, n4); 

    suma = calcularSuma(n1,n2,n3,n4);

    promedio = calcularPromedio(suma); 

    mostrarResultados(suma, promedio); 

    return 0;

}

void leerCuatroNumeros(int &a, int &b, int &c, int &d){

    cout <<"Ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d; 
}

int calcularSuma(int a, int b, int c, int d){
    return a + b + c + d; 
}

double calcularPromedio(int suma){

    return suma / 4.0;
}

void mostrarResultados(int suma, double promedio){

    cout <<"Resultados: " << endl;
    cout <<"Suma: " << suma << endl; 
    cout <<"Promedio: " << promedio << endl;

}
