#include<stdio.h>

void swap(int *, int *);

int main(void){
	int x = 5, y = 10;
	printf("Beginning: 	x = %d, y = %d\n", x, y);
	swap(&x, &y);
	printf("Last: 		x = %d, y = %d\n", x, y);
	
	return 0;
}

void swap(int * u, int * v){
	int temp;
	temp = * u;
	* u = * v;
	* v = temp;
}
