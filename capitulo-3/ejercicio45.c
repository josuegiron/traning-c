#include <stdio.h>

// main
int main(){

    int a, b, c;

    printf("Ingrese tres valores distintos de cero: \n");
    
    printf("Ingrese a: ");
    scanf("%d", &a);
    
    printf("Ingrese b: ");
    scanf("%d", &b);
    
    printf("Ingrese c: ");
    scanf("%d", &c);

    float m = ((a / c) * (a / c) + (b / c) * (b / c)) - 1;
    int n = m / 0.001; 

    if ( n == 0 ) {
        
        printf("Son lados de un triangulo rectángulo. \n");
        return 0;
        
    }// end if 


    m = ((a / b) * (a / b) + (c / b) * (c / b)) - 1;
    n = m / 0.001;

    if ( n == 0 ){
        
        printf("Son lados de un triangulo rectángulo. \n");
        return 0;
        
    }// end if 

    m = ((b / a) * (b / a) + (c / a) * (c / a)) - 1;
    n = m / 0.001;

    if ( n == 0 ){
        
        printf("Son lados de un triangulo rectángulo. \n");
        return 0;
        
    }// end if 

    printf("No son lados de un triangulo recto!\n");
}// end main