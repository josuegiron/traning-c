#include <stdio.h>

/* main */
int main(){

    int i = 0;

    printf("A\tA+2\tA+4\tA+6\n");
    
    while(i < 15) {

        i +=3;

        printf("%d\t%d\t%d\t%d\n", i, i+2, i+4, i+6);
        
    }/* end while */
    
}/* end main */