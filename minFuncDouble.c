#include<stdio.h>

double min(double, double);

int main(void){
	double x, y;
	printf("Please input two \"double\" numbers(or q to quit):\n");
	while(scanf("%lf %lf", &x, &y) == 2){
		if(x == y){
			printf("These two numbers are equal\n");
			printf("Please input two \"double\" numbers(or q to quit):\n");
			continue;
		}
			printf("%.4lf is the smaller one.\n", min(x, y));
			printf("Please input two \"double\" numbers(or q to quit):\n");
	}
	printf("Bye\n");
	return 0;
}

double min(double a, double b){
	return (a < b ? a : b);
}
