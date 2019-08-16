#include <stdio.h>

// main
int main(){

    long n = 1;

    while ( n <= 300000000 ){

        long m = n % 1000000;

        if ( m == 0 ){

            printf("%d\n", n);
            
        }// en if

        n++;

    }// end while

}// end main