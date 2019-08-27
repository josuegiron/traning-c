#include <stdio.h>

// main
int main(){

    for (int i = 1; i <= 3; i++){

        int cuenta;
        float limite, saldo;

        printf("Ingrese el núnmero de cuenta del cliente: ");
        scanf("%d", &cuenta);
        
        printf("Ingrese el límite de crédito antes de la recesión: ");
        scanf("%f", &limite);
        
        printf("Ingrese el saldo actuál del cliente: ");
        scanf("%f", &saldo);

        printf("\nEl nuevo límite de crédito del cliente es: %f\n", (float)limite/2);
        
        if (saldo > limite/2){

            printf("\n*El saldo del cliente excede los nuevos límites de crédito...\n");
            
        }// end if

        printf("\n");
        
    }// end for

}// end main