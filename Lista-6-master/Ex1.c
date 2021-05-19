#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a[8],i;
    for (i = 0; i < 8; i++)
    {
        a[i] = rand()%100;
    }
    printf("Digite um numero de 0 a 100 : ");
    int n,j,e = 0;
    scanf("%i",&n);
    for (j = 0 ; j < a[j]; j++)
    {
        if (n == a[j])
        {
            printf("O numero existe no vetor !!\n Esta na posicao %i\n",j);
            e = 1;
        }
    }
    if (e == 0)
    {
        printf("Voce errou ");
    }
    return 0;
}
