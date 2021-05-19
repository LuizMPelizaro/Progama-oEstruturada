#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
float Media  (int n1,int n2,int n3){
	float M = (n1+n2+n3)/3;
	return (M);
}
int main()
{
    srand(time(NULL));
    printf("Digite tres numero : ");
  	int n,n1,n2;
  	float M;
	scanf("%i%i%i",&n,&n1,&n2);
	M = Media(n,n1,n2);
	printf("A media desses numeros é de : %f",M);
    return 0;
}
