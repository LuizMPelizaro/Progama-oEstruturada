#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float Teto  (float t){
	int T  = ceil(t);
	return (T);
}
float Piso (float p){
	int P = floor (p);
	return (p);
}
int main()
{
    srand(time(NULL));
    printf("Digite um numero decimal : ");
  	float n;
  	int T,P;
	scanf("%f",&n);
	T = Teto(n);
	P = Piso(n);
	printf("Valor de Teto : %i \n Valor do numero : %f\n Valor de Piso : %i \n",T,n,P);
    return 0;
}
