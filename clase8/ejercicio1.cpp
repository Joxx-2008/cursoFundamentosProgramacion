/*

EJERCICIO 3 - REGISTRAR PRECIOS Y BUSCAR VALOR

Autor: Joustin Armas 
Fecha: 2026-10-21   

Enunciado:
   Realizar un programa en C++ que permita ingrsar 6 precios enteros 
   en un arreglo.
   Luego el programa debe: 
      - mostrar todos los precios registrados junto con su posicion 
      - pedir al usuario un precio para buscar dentro del arrglo
      - mostrar si el precio fue encontrado o no
      - mostrar la poscion de la primera concidencia encotrada 

*/

#include <iostream>
#include <string>
using namespace std; 

int main(){

    int precio[6], buscado, posicion = -1;
    int i;
    bool encontrado = false; 

    // Paso 1: Cargar los precios en el arreglo 
    for(i = 0; i < 6; i++){

        cout <<"Ingrese el precio " << i + 1 << ":"; 
        cin >> precio[i];
    }

        cout << endl;

        cout <<"Precios resgistrados"<< endl; 

        // Paso 2: Mostrar los precios guardados 
        for(i = 0; i < 6; i++){

            // Mostramos la posicion y el valor guardado
            cout <<"Posicion " << i << ": " << precio[i] << endl;

        }

        cout << endl;
        cout <<"Ingrese el precio que desea buscar: ";
        cin >> buscado;

        // Paso 4: REALIZAR LA BUSQUEDA SECUENCIAL
        for(i = 0; i < 6; i++){

            if(precio[i] == buscado && encontrado == false){

                encontrado = true;
                posicion = i; 
            }
        }

            cout << endl;

            // Paso 5: MOSTRAR EL RESULTADO DE LA BUSQUEDA 
            if(encontrado == true){

                cout <<"Precio encontrado en la posicion: " << posicion + 1 << endl;    

            }else{
                cout <<"Precio no encontrado"<< endl;
            }
            return 0;

        

}
