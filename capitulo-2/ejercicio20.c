#include <stdio.h>

/* Incio del main */
int main(){
    int r;
    
    printf("Ingrese el radio de un circulo\n");
    scanf("%d", &r);
    
    printf("El diámetro del circulo es %d\n", r + r);
    printf("La circunferencia del circulo es %f\n", (r + r)*3.14159);
    printf("El área de un circulo es %f\n", 3.14159*r*r);
    
    return 0;
}