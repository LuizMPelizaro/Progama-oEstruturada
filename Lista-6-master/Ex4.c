#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a[8],i,s = 0,j=0;
    for (i = 0; i < 8; i++)
    {
        a[i] = rand()%51;
        if (a[i] > 30){
            s = s + a[i];
            j ++;
        }
        printf("%i ",a[i]);
    }
    printf("\nO numero maiores que 30 : %i\n A somas desses numeros sao = %i\n",j,s);
    return 0;
}
