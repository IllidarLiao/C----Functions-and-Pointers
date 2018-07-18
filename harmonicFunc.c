#include<stdio.h>

double harmonic(double, double);

int main(void){
    double x, y;
    printf("Please input two \"double\" numbers(or q to quit):");
    while( scanf("%lf %lf", &x, &y) == 2 ){
        printf("Harmonic mean is %.3lf\n", harmonic(x, y));
        printf("Please input two \"double\" numbers(or q to quit):");
    }   
    return 0;
}

double harmonic(double a, double b){ 
    double w, z;
    w = 1/a;
    z = 1/b;
    return 1/(w + z); 
}
