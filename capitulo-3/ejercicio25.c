#include <stdio.h>

/* main */
int main(){

    int i = 0;

    printf("N\t10*N\tN*100\tN*1000\n");
    
    while( i < 10){

        ++i;

        printf("%d\t%d\t%d\t%d\n", i, 10*i, 100*i, 1000*i);
        
    }/* end while */

}/* end main */