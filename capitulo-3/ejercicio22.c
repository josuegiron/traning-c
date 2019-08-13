#include <stdio.h>

/* Inicio del main */
int main(){

    int i = 0;

    printf("Precremento: \n");
    
    /* precremento */
    while( i < 10){

        printf("%d\n", ++i);

    }/* end while */

    i = 0;

    printf("Poscremento: \n");
    
    /* poscremento */
    while( i < 10){

        printf("%d\n", i++);

    }/* end while */

}/* end main */