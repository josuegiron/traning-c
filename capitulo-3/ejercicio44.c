#include <stdio.h>

// main
int main(){

    float a, b, c;

    printf("Ingrese tres valores distintos de cero: \n");
    
    printf("Ingrese a: ");
    scanf("%f", &a);
    
    printf("Ingrese b: ");
    scanf("%f", &b);
    
    printf("Ingrese c: ");
    scanf("%f", &c);
    
    printf("%f\n", ((a / c)*(a / c) + (b / c)*(b / c) - 1));
    
    if ( (int)(a / c + b / c - 1) == 0 ) {
        
        printf("Son lados de un triangulo rectángulo. \n");
        
    }// end if 

    if ( a * a + c * c == b * b){
        
        printf("Son lados de un triangulo rectángulo. \n");
        
    }// end if 

    if ( c * c + b * b == a * a){
        
        printf("Son lados de un triangulo rectángulo. \n");
        
    }// end if 

}// end main