#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\tEscreva um valor inteiro\n");
    int i,n,ni,np,j;
    scanf("%i",&n);
    ni = n-10;
    np = n +10;
    for (i = ni; i <= n; i++)
    {
        if (i%2!=0)
        {
            printf("%i ",i);
        }
    }
    for (j = n ; j <=np; j++)
    {
        if (j%2 == 0)
        {
            printf(" %i",j);
        }
    }
    return 0;
}

