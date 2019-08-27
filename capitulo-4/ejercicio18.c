#include <stdio.h>

// main
int main(){

    printf("Ingrese cinco numeros entre 1 y 30\n");
    
    for (int i = 0; i < 5; i ++){
        
        int num;
        scanf("%d", &num);

        if ( num < 1 || num > 30){
            
            printf("Debe ingresar un número entre 1 y 30.\n");
            i--;
            continue;

        }// end if

        printf("%d ", num);
        
        for(int j = 0; j < num; j++){
            printf("*");
        }

        printf("\n");

    }// end for

    return 0;

}// end main