#include <stdio.h>

// main
int main(){

    int producto = 1;

    for(int a = 1; a <= 15; a += 2){
        
        producto *= a;

    }// end for 

    printf("El producto es: %d\n", producto);
    
}// end main