#include <stdio.h>

// main 
int main(){

    int numero, n = 4;
    int digito, encripted = 0;
    
    printf("Ingrese un número de cuatro dígitos: ");
    scanf("%d", &numero);
    
    while ( n > 0 ){
        int x = 1;
        int i = n - 1;

        while( i > 0){

            x *= 10;
            i--;

        }// end while

        digito = numero / x ;
        numero = numero % x;

        digito = (digito + 7) % 10;
        
        if ( n == 4 ){

            encripted += digito * 10;

        } else if (n == 3){

            encripted += digito * 1;

        } else if (n == 2){

            encripted += digito * 1000;

        } else if (n == 1){

            encripted += digito * 100;

        }

        n--;
    }// end while

    printf("Entero encriptado: %d\n", encripted);
    
}// end main