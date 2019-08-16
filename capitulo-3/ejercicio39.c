#include <stdio.h>

// main
int main(){

    int number, digito, count = 0;

    printf("Ingrese un número para determinar si posee digitos 7: ");
    scanf("%d", &number);

    while ( number > 0 ){

        digito = number % 10;
        number = number / 10;
        
        if ( digito == 7 ){
            count++;
        }// end if  

    }// end while

    printf("El número contiene %d digitos '7'.\n", count);
    
}// end main