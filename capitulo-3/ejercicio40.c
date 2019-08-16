#include <stdio.h>

// main
int main(){

    int i, j;
    i = 0;

    while ( i < 8 ){

        if ( i % 2 != 0 ){

            printf(" ");
            
        }// end if 
        
        j = 0;

        while ( j < 8 ){
            
            printf("* ");
            j++;

        }// end while 

        printf("\n");
        i++;

    }// end while

}// end main