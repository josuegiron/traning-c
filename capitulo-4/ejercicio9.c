#include <stdio.h>

// main
int main(){

    int numero, x;
    int i = 0;
    int total = 0;

    do{
        
        printf("Ingrese un número: ");
        scanf("%d", &numero);
        
        if ( i == 0 ){
            
            x = numero;

        }// end if 

        total += numero;
        i++;

    }while(i < x);

    printf("Total: %d\n", total);

}// end  main