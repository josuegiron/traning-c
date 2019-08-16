#include <stdio.h>

// main
int main(){

    int n = 1;

    while( n <= 100 ){

        int m = n % 10;

        printf("*");
        
        if ( m == 0 ){

            printf("\n");

        }// end if

        n++;

    }// end while

}// end main