#include<stdio.h>

double power(double, int);

int main(void){
	double x, xpow;
	int exp;
	printf("Enter a number and a integer power to which the number will be raised(enter q to quit): ");
	while( scanf("%lf %d", &x, &exp) == 2 ){
			xpow = power(x, exp);
			printf("%.2g to the power %d is %.4g\n", x, exp, xpow);
			printf("Enter next pair of numbers or q to quit: ");
	}
	printf("Bye\n");
	return 0;
}

double power(double n, int p){
//zero raised to any power is zero
	if(n == 0)
		return 0;
		
	double pow = 1;
	int i, k;
	k = abs(p);
	for(i = 1; i <= k; i++)
		pow *= n;
	if(p > 0)
		return pow;
	else if(p < 0)
		return (1/pow);
	//any number raised to zero power is one
	else
		return 1;
}
