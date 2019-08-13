#include <stdio.h>

/* main */
int main(){

    int i = 0, numero = 0, mayor = 0, segundoMayor = 0;

    while ( i < 10 ){
        
        i++;

        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if ( numero > mayor ){
            
            segundoMayor = mayor;
            mayor = numero;

        }else if ( numero > segundoMayor ){

            segundoMayor = numero;

        }/* end if */  

    }/* end while */
        
    printf("El mayor es: %d\nEl segundo mayor es: %d\n", mayor, segundoMayor);

}/* end main */