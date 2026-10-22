/*
EJERCICIO 2: Promedio de 3 notas (validacion de 0 a 10)

Autor: Joustin Armas 
Fecha: 2026-10-19

Enunciado:
    El sistema recibe 3 notas y muetra el  promedio.
    Regla: Cada nota debe estar en el rango de 0 a 10
    Si una nota esta fuera del rango, Mostrar "Datos invalidos"

E/P/S

  Entrada: n1, n2 y n3
  Proceso: validar rango, calcular promedio
  Salida: promedio, o "Datos invalidos"

*/

#include <iostream>
#include <string>

using namespace std; 


int main(){

    double n1, n2, n3, promedio;

    cout << "Ingrese nota 1: ";
    cin >> n1;

    cout << "Ingrese nota 2: ";
    cin >> n2;

    cout << "Ingrese nota 3: ";
    cin >> n3;

    if( n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10){

        cout << "Datos invalidos" << endl;
        return 0;

    }

    promedio= (n1 + n2 + n3) /3;

    cout << "El promedio es: " << promedio << endl;

    return 0;

}