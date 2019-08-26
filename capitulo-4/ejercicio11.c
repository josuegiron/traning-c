#include <stdio.h>

// main
int main(){

    int i = 0, numero, x = 0;
    int menor = 0;

    printf("Ingrese una serie de números: \n");

    do{
        
        scanf("%d", &numero);

        if ( i == 0 ){

            x = numero;
            menor = numero;

        }// end if

        if ( numero < menor ){

            menor = numero;

        }// end if 

        i++;
        
    }while(i < x);

    printf("El menor es: %d\n", menor);
    
}// end main