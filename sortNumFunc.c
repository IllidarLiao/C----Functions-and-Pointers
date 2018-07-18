#include<stdio.h>

void sortNum(double *, double *, double *); 

int main(void){
    double x, y, z;
    printf("Please input three \"double\" numbers(or q to quit):");
    while( scanf("%lf %lf %lf", &x, &y, &z) == 3 ){
        printf("Your numbers are x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z); 
        sortNum(&x, &y, &z);
        printf("Now your numbers are x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z); 
        printf("Please input three \"double\" numbers(or q to quit):");
    }   
    
    return 0;
}

void sortNum(double * a, double * b, double * c){ 
    double temp, temp1 = * a, temp2 = * b, temp3 = * c;
    temp = temp1 > temp2 ? temp1 : temp2;
    * c = temp3 > temp ? temp3 : temp;
    temp = temp1 < temp2 ? temp1 : temp2;
    * a = temp < temp3 ? temp : temp3;
    if(temp1 > * a && temp1 < *c) 
        * b = temp1;
    else if(temp2 > * a && temp2 < *c) 
        * b = temp2;
    else
        * b = temp3;
}
