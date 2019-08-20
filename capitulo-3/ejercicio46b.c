#include <stdio.h>

// main 
int main(){

    int encripted, n = 4;
    int digito, decripted = 0;
    
    printf("Ingrese un número encriptado de cuatro dígitos: ");
    scanf("%d", &encripted);
    
    while ( n > 0 ){

        digito = encripted % 10 ;
        encripted = encripted / 10;

        digito = (10 + digito - 7) % 10;

        if ( n == 4 ){

            decripted += digito * 10;

        } else if (n == 3){

            decripted += digito * 1;

        } else if (n == 2){

            decripted += digito * 1000;

        } else if (n == 1){

            decripted += digito * 100;

        }
        
        n--;
        
    }// end while

    printf("Entero desencriptado: %d\n", decripted);
    
}// end main