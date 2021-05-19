#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int i,n,a[15],j;
    for(i = 0; i < 15; i++)
    {
        a[i] =1 +rand()%40;
        printf("%i ",a[i]);
        for(j = 0; j < i; j++)
        {
            if (a[i] %2 == 1)
            {
                a[i] =0;
            }
        }
    }
    printf("\n");
    for(i = 0; i < 15; i++)
    {
        printf("%i ",a[i]);
    }
    return 0;
}
