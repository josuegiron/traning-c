#include <stdio.h>

// main
int main(){

    int number, fact;

    printf("Escriba un número para calcular su factorial: ");
    scanf("%d", &number);
    
    fact = number;

    while ( number > 1 ){

        printf("%d\n", fact);
        fact *= --number;

    }// end while

    printf("El factorial es: %d\n", fact);
    
}// end main