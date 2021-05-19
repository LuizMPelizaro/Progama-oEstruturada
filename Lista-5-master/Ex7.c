#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    srand(time(NULL));
    printf("Digite um numero ");
    scanf("%i",&n);
    for (i = 1 ;i <= n;i++){
        for (j = 0;j <= i-1 ; j++){
            printf("%i ",i);
        }
        printf("\n");
    }
    return 0;
}

