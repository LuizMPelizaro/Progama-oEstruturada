#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char  check (char n){
	if (isalpha(n)){
		printf("1\n");
	}
	else{ 
	printf("0\n");
	}
}
int main()
{
	char c;
	printf("Digite um caracter :\n");
	scanf("%c",&c);
	printf("%c\n",check(c));
    return 0;
}
