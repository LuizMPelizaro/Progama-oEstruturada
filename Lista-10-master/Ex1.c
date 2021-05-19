#include <stdio.h>
#include <stdlib.h>
int  POW (int a,int b){
	int i;
	int r = a;
	if (b > 0){
	
	for (i = 1; i <= b-1 ;i++){
	r = r * a;
		}
		
		}
		else if (b == 0) {
			if (a == 0){
				printf("Inexistente");
			}
			else {
			r = 1;
			}
			
		}
	return (r);
}
int main(int argc, char *argv[]) {
	int n1,n2;
	printf ("Escreva um numeros \n");
	scanf("%i",&n1);
	printf("Escreva a potencia \n");
	scanf("%i",&n2);
	printf("\nO resultado de %i elevado a %i : %i\n",n1,n2,POW(n1,n2));
	return 0;
}
