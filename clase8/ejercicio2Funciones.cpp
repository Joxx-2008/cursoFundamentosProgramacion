/*

CONCEPTOS IMPORTANTES 

1- Una funcion tiene una tarea especifica.
    No conviene hacer todo dentro del main 

2. Parametros:
   1- Los parametros son los datos que una funcion recibe para poder trabajar.
      int calcularsuma(int a, int b, int c)

3. Retorno 
   El retorno es el valor que la funcion devuelve 
      return a+b+c;

4. Void 
   Una funcion void no devuelve el valor. Solo realiza la accion 

La idea con "&" es:
   -Sin & = copia 
   -Con & = original

Parte 2 - Primer Ejemplo : sin & 

*/

#include <iostream>
#include <string>

using namespace std;

// Mi funcion de aumentar
void aumentar(int x){
    x = x + 1;

    cout <<"Dentro de la funcion, X vale: " << x << endl; 
}

int main(){

    int a = 10; 

    aumentar(a);

    cout <<"Fuera de la funcion, a vale: " << a << endl;

    return 0;

}