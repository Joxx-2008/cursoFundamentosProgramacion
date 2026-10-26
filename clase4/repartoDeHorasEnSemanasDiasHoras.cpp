/*

TAREA 4 - EJERCICIO 5: RERPARTO DE HORAS EN SEMANAS, DIAS Y HORAS

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:
   TAREA 4 - EJERCICIO 4: NOTA FINAL CON PONDERACIONES 

Autor: Joustin Armas 
Fecha: 2026-10-

Enunciado:
   Escribe un algoritmo que reciba un número entero de horas totales (un valor no
   negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas
   sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al
   final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.
E/P/S
   Entrada: 
      -Horas totales.

    Proceso: 
       Calcular el sobrante de las horas totales.

    Salida:
       Mostrar sobrante.

*/

#include <iostream> 
#include <string>

using namespace std; 

int main(){

    int horast, horas, dias, semanas ,sobranteS;

    cout <<"Ingrese las horas totales: "; 
    cin >> horast;

    if(horast > 0){

        semanas = horast / 168;
        sobranteS = horast % 168;
        dias = sobranteS / 168;
        horas = sobranteS % 168;

        cout <<"Su sobrante es de: " << semanas << ":" << dias << ":" << horas << endl;
        
    }else{

        cout <<"Datos ingresados invalidos";

    }

    return 0;

}

  