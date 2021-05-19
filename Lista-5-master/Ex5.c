#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i;
    srand(time(NULL));
    n1 = rand()%101;
    n2 = rand()%101;
    printf("%i\n",n1);
    printf("%i\n",n2);
    if (n1 > n2)
    {
        for(i = n2+1; i < n1; i++)
        {
            printf("%i ",i);
        }
    }
    else if (n2 > n1)
    {
        for(i = n1+1; i < n2; i++)
        {
            printf("%i ",i);
        }
    }
    else
    {
        printf("Erro");
    }
    return 0;
}

