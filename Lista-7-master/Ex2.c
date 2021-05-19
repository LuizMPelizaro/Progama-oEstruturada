#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a[5],b[8],i,j,c;
    for (i = 0; i < 5; i++)
    {
        a[i] = rand()% 11;
        printf("%i ",a[i]);
    }
    printf("\n");
    for (i = 0; i<8; i++)
    {
        b[i] = rand ()% 11;
        printf("%i ",b[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (a[i] == b[j])
            {
                printf("%i ",a[i]);
                break;
            }
        }
    }
    return 0;
}
