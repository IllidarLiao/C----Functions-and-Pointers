#include<stdio.h>

void large_of(double *, double *); 

int main(void){
    double x, y;
    printf("Please input two numbers x and y(or q to quit):");
    while( scanf("%lf %lf", &x, &y) == 2 ){
        printf("Your x = %.2lf, y = %.2lf\n", x, y); 
        large_of(&x, &y);
        printf("Now your numbers are  x = %.2lf, y = %.2lf\n", x, y); 
    
        printf("Please input two numbers x and y(or q to quit):");
    }   
}

void large_of(double * a, double * b){
    if(* a > * b)
        * b = * a;
    else
        * a = * b;
}
