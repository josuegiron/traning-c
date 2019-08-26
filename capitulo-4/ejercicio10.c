#include <stdio.h>

// main
int main(){

    int numero = 0;
    int total = 0, contador = 0;

    printf("Ingrese varios numeros para sacar el promedio. (ingrese 9999 praa terminar).\n");

    while( numero != 9999){

        scanf("%d", &numero);
        
        if( numero != 9999){
            
            total += numero;
            contador++;

        }// end if 

    }// end while

    printf("El promedio es: %f\n", (float)total/contador);

}// end main