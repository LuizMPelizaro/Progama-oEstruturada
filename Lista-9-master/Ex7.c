#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char distancia (char a,char b){
	char V [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int j , k ,i,r;
	j = 0;
	k = 0;
	for (i = 0;i <26;i++){
		if(a == V[i]){
			j = i;
			}
		else if(b == V[i]){
			k = i;
		}
		}
	 r = abs (j - k) -1;
	return (r);
}
int main()
{
	char a,b;
	printf("Digite dois caracter :\n");
	scanf("%c",&a);
	scanf("%c",&b);
	printf("A distancia entre %c e %c é de : %i\n",a,b,distancia(a,b));
    return 0;
}
