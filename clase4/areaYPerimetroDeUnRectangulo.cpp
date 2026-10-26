/*

TAREA 4 - EJERCICIO 2: AREA Y PERIMETRO DE UN RECTANGULO

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:
   Escribe un algoritmo que reciba la base y la altura de un rectángulo. Con esos datos,
   debe calcular y mostrar el área y el perímetro del rectángulo.

E/P/S
   Entrada: 
      -Altura de un rectangulo
      -Base de un rectangulo

    Proceso: 
       Calcular area y perimetro

    Salida:
       Mostrar el resultado del area y perimetro

*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    double base, altura, area, perimetro;

    cout <<"===Para tu area y tu perimetro ingresa los siguientes datos===" << endl;

    cout <<"Base: " << endl;
    cin >> base; 

    cout <<"Altura: " << endl; 
    cin >> altura;

    if(base > 0 && altura > 0){

        area = base * altura;
        perimetro = 2 * (base + altura); 

        cout <<"Tu area es: " << area << endl;
        cout << "Tu perimetro es: " << perimetro << endl;

    }else{

        cout <<"Valores ingresados icorrectos"; 

    }
    return 0;
}
