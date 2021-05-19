#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l;
    srand(time(NULL));
    printf("Digite um numero ");
    scanf("%i",&n);
    for (i = 1 ; i <= n; i++)
    {
        for (j = 0; j <= i-1 ; j++)
        {
            printf("%i ",i);
        }
        if (i == n)
        {
            printf("\n");
            for (k = n-1; k>= 1; k--)
            {
                for (l = k-1; l >= 0; l--)
                {
                    printf("%i ",k);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
