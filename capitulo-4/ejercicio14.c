#include <stdio.h>

// main
int main(){

    int factorial = 1;

    for(int i = 1; i <= 5; i ++){

        factorial *= i; 
        printf("Factorial: %20d\n", factorial);

    }// end for

    printf("El factorial es: %20d\n", factorial);

}// end main

// para preveer se debe tener un espaciado de 20 caracteres. 