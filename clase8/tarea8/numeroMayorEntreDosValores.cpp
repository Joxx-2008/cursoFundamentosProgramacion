/*

TAREA 8 - EJERCICIO 2: Numero mayor entre dos valores 

Autor: Joustin Armas 
Fecha: 2026-10-25

Enunciado: 
   Desarrolla un programa que permita ingresar dos números enteros y determine cuál
   de los dos es mayor.
   El programa debe estar modularizado usando funciones para:
       • leer los datos,
       • comparar los valores,
       • mostrar el resultado.
   Si ambos números son iguales, el programa también debe indicarlo.

*/

#include <iostream>
#include <string>

using namespace std;

void leerDatos (int &n1, int &n2); 
int compararValores (int n1, int n2, int &igual);
void mostrarValores (int mayor, int igual);

int main(){

    int n1, n2;
    int mayor, igual;

    leerDatos (n1, n2);
    mayor = compararValores(n1, n2, igual);
    mostrarValores (mayor, igual);
    
    return 0;

}

void leerDatos (int &n1, int &n2){

    cout <<"Ingresa dos numeros enteros: ";
    cin >> n1 >> n2;

}

int compararValores (int n1, int n2, int &igual){

    if(n1 > n2){

       return n1;

    }else if(n1 < n2){

        return n2; 

    }else{

        igual = 0;
        return 0;
    }  
}

void mostrarValores (int mayor, int igual){


    if(igual == 0){

        cout <<"Sus numeros son iguales" << endl;

    }else{

        cout <<"Su numero mayor es: " << mayor << endl;

    }

}
   
