#include <stdio.h>

// main
int main(){

    printf("(A)\n");
    
    for (int i = 0; i < 10; i++){

        for (int j = 0; j <= i; j++){
            
            printf("*");
            
        }// end for

        printf("\n");
        
    }// end for
    
    printf("(B)\n");
    
    for (int i = 10; i > 0; i--){

        for (int j = i; j > 0; j--){
            
            printf("*");
            
        }// end for

        printf("\n");
        
    }// end for
    
    printf("(C)\n");
    
    for (int i = 10; i > 0; i--){

        for (int j = 10 - i; j > 0; j--){
            
            printf(" ");
            
        }// end for

        for (int j = i; j > 0; j--){
            
            printf("*");
            
        }// end for

        printf("\n");
        
    }// end for
    
    printf("(D)\n");
    
    for (int i = 0; i < 10; i++){

        for (int j = 10 - i; j > 0; j--){
            
            printf(" ");
            
        }// end for

        for (int j = i; j > 0; j--){
            
            printf("*");
            
        }// end for

        printf("\n");
        
    }// end for

    return 0;

}// end main