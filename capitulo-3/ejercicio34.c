#include <stdio.h>

/* main */
int main(){

    int a = 21;
    int i, j;

    while ( a > 20 ){

        printf("Ingrese la medida del lado de un cuadro: ");
        scanf("%d", &a);
        
        if ( a > 20 ){

            printf("Ingrese un valor menor o igual a 20.\n");

        } else {

            i = 0;

            while ( i < a ){
                
                j = 0;

                while ( j < a ){

                    if (  j == a - 1 ){

                        printf("*");

                    }else if ( i == 0){
                        
                        printf("*");

                    }else if ( i == a - 1 ){
                        
                        printf("*");

                    }else if ( j == 0){
                        
                        printf("*");

                    }else{

                        printf(" ");

                    }/* end if */

                    j++;

                }/* end while */

                printf("\n");
                i++;
                
            }/* end while */

        }/* end if */
        
    }/* end while */

}/* end main */