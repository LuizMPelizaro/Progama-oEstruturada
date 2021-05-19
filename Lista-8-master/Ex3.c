#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int a[5][5],i,j,k;
    for (i = 0; i< 5; i++)
    {
        for(j = 0; j<5; j++)
        {
            k = 10-rand()%20;
            a[i][j] = k;
            printf("%3i ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
