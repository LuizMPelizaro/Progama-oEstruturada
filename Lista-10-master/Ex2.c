#include <stdio.h>
#include <stdlib.h>
float  Area (float b,float h){
	float r = 0;
	r = (b*h)/2;
	return (r);
}
int main(int argc, char *argv[]) {
	float n1,n2;
	printf ("Escreva a base do triangulo \n");
	scanf("%f",&n1);
	printf("Escreva a altura  \n");
	scanf("%f",&n2);
	printf("\nA area do triangulo é de %0.2f\n",Area(n1,n2));
	return 0;
}
