/*
EJERCICIO 2: Promedio de 3 notas (validacion de 0 a 10)

Arutor: Joustin Armas 
Fecha: 2026-10-19

Enunciado:
    El sistema recibe 3 notas y muetra el  promedio.
    Regla: Cada nota debe estar en el rango de 0 a 10
    Si una nota esta fuera del rango, Mostrar "Datos invalidos"

E/P/S

  Entrada: nota1, nota2 y nota3
  Proceso: validar rango, calcular promedio
  Salida: promedio, o "Datos invalidos"

*/

#include <iostream>
#include <string>

using namespace std; 

int manin (){

    double nota1, nota2, nota3, promedio;

    cout << "Ingrese nota 1: ";
    cin >> nota1;

    cout << "Ingrese nota 2: ";
    cin >> nota2;

    cout << "Ingrese nota 3: ";
    cin >> nota3;

    if( nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10){

        cout << "Datos invalidos" << endl;
        return 0;

    }

    promedio= (nota1 + nota2 + nota3) /3;

    cout << "El promedio es: " << promedio << endl;

    retourn 0;



}