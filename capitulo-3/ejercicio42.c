#include <stdio.h>

// main
int main(){

    float r, pi = 3.14159;

    printf("Ingrese el radio de un circulo: ");
    scanf("%f", &r);
    
    printf("Diametro: %0.5f\nCircunferencia: %0.5f\nÁrea: %0.5f\n", 2 * r, 2 * pi * r, pi * r * r);
    
}// end main