/*

EJERCICIO 2 - BUSQUEDA SECUENCIAL EN ARREGLOS

Autor: Joustin Armas 
Fecha: 2026-10-19

Enunciado:
   Realizar un programa en C++ que permita ingresar 6 numerosa entros en un arreglo.
   Luego, pedir al usuario un numero adicional para buscar en el arreglo 

   El programa debe indicar: 
      -Si el numero fur encontado
      -Y en que posicion se encuentra
      -Si el numero no existe en el arrgelo debe mostrar un mensaje encontrando que no fue encontrado.

    En esta clase se trabajara con la primera coincuidencia encontrada.

*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    int numeros[6];
    int i;

    //Variable donde guardaremos el numero que el usuario quiere buscar.
    int buscado;

    //Variable para guardar la posicion donde se debe encontrar el numero.
    //Si el valor al final no cambia de -1 entonces significa que no se encontro.
    int posicion = -1; 

    //Variable tipo bandera: Nos ayuda a saber si encontramos o no el numero.
    bool encontrado = false;  

    for(i = 1; i < 6; i++){

        cout <<"Ingrese el numero " << i << ": "; 
        cin >> numeros[i];
    }

    cout << endl; 

    cout <<"Ingresse el numero que desea bucar: "; 
    cin >> buscado; 

    //BUSQUEDA SECUENCIAL
    //Recorer el arreglo posicon por posicion
    for(i = 0; i < 6; i++){
        //Comparamos si el valor guardado en la posicion i es igual al que queremos buscar
        if(numeros[i] == buscado && encontrado == false){

            //Si coincide marcamos que si fue encontrado 
            encontrado = true;
            
            //Guardamos la posicion donde la encontramos 
            posicion = i + 1; 
        }
    }

    cout << endl; 

    //Redultado final
    if(encontrado == true){

        cout <<"Numero encontrado en la poscion: " << posicion << endl; 
        
    }else{

        cout <<"Numero no encontrado" << endl; 
    }

    return 0;

}

