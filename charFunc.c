#include<stdio.h>

void chline(char, int, int);

int main(void){
	char w;
	int x, y;
	printf("Please input a character(or q to quit):");
	w = getchar();
	while( w != 'q' ){
		printf("Please input two integers:");
		while(1){
			scanf("%d %d", &x, &y)
			if( x < y ){
				chline(w, x, y);
				break;
			}else
				printf("Please input two integers:");
		}
		printf("Please input a character(or q to quit):");
		w = getchar();
	}
	printf("Bye\n");
	return 0;
}

void chline(char ch, int i, int j){
	int a, b;
	for(a = 1; a <= i; a++)
		putchar(' ');
	for(b = 1; b <= j-i; b++)
		putchar(ch);
	putchar('\n');
}
