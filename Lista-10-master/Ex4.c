#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int  maior (int a,int b,int c){
    if(a > b and a > c){
    		printf("Maior %i",a);
	}
	else if (b > a and b > c){
		printf("Maior %i",b);
	}
	else if (c > a and c > b){
		printf("Maior %i",c);
	}
}
int  menor (int a,int b,int c){
    if(a < b and a < c){
    		printf("Menor %i",a);
	}
	else if (b < a and b < c){
		printf("Menor %i",b);
	}
	else if (c < a and c < b){
		printf("menor %i",c);
	}
}
int main()
{
    srand(time(NULL));
    int a,b,c;
    printf("Escreva 3 numero ");
    scanf("%i%i%i",&a,&b,&c);
    maior(a,b,c);
    printf("\n");
    menor(a,b,c);
    return 0;
}
