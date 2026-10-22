/*
PLANTILLA BASE PARA TODO PROGRAMA EN C++

Autor: Joustin Armas
Fecha : 2024-06-10

Plantilla para copiar siempre 

# include <iostream>
# include <string> // (Opcional solo si se usa texto)
using namespace std;

int main() {
  1) Declarar variables 
  2) Soliciatar satos al usuario 
  3) Procesos (Claculos, operaciones, etc)
  3) Mostrar resultados (salidas)

  return 0; 
}

*/

/*
Explicaion de cada parte de la plantilla:

1) include <iostream>
   Esto le da al programa la capacidad de usar la entrada y salida, como out para mostrar
   el mensaje en la pantalla y cin para recibir datos de usuario 

2) using namespace std; 
    Esto es para no escribir ¨std::¨ antes de cada funcion de la biblioteca estandar, como cout y cin.
    Es la forma de simplificar el codigo. 

3) int main() {..}
    Main es la puerta de entrada. Es la funcion principal que se ejecuta cuando el programa comienza.
    El codigo que quieras ejecutar va estar dentro de esta funcion. 

4) Declaracion de variables
    Aqui es donde se definen las variables que se van usar en el programa. Por ejemplo:
    inte edad, string nombre. 

5)  cout << ¨texto¨;
      Es la forma de motrar un mensaje al usuario. Pensemos en esto como la salida. 

6)  cin>> variable;
      Esto es para recibir datos del usuario. El programa se detiene para que el usuario ingrese un valor 
      que luego almacena en la variable.

7) endl 
    Significa un salto de linea (Como si fuera en enter en un archivo de texto).

8) return 0; 
    Esto indica que el programa llego a su final. Una forma de decirle al programa que todo salio bien.

9) {} (Llaves) 
    Marcan el bloque del codigo (inicio y final).

10) ; (Punto y Como)
    Termina una instruccion. Si falta suelta error.

11) // Comentario 
    Comentario de un sola linea.

12) /*...
    Comentario de varias lineas. 

TIPO DE DATOS BASICOS

int -> Enteros (1, 2, 3)
floats -> Decimales  (1.3, 2.4)
char -> Un caracter (a, b, c)
string -> Texto (¨Hola¨) (requiere #include <string>)
bool -> verdadero y falso (true, false)

*/

/*
CONDICIONALES EN C++

Estructura basica para un (if, else)

if(condition){
   /se ejecuta si la condicion es verdadera 
}else{ 
   /se ejecuta si la condicion es falsa 

}

Varias condiciones (else, if)

if (nota >= 9)
  cout << ¨Exelente¨ endl;

else if (nota >= 7) endl;
  cout << (Aprobado) endl;

else{ 
  cout << ¨Reprobado¨endl;
  
}

*/

/*
OPERADORES DE COMPARACION 
== igual a (comparacion=)
!= (diferendete de)
< mayor que 
> menor que 
>= mayor igual que 
<= menor igual que 

*/

/*

OPERADORES LOGICOS 

&& AND: Ambas condixiones deben de cumplirse 
|| OR: se cumple uno u otro 
! NOT: negacion  

*/