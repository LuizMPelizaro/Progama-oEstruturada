#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int i,n,a[20],j;
    for(i = 0; i < 20; i++)
    {
        a[i] = rand()%50;
        for (j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                printf("%2i ",a[j]);
            }
            else if (j == 0)
            {
                printf("\n");
            }
        }
        printf("%2i ",a[i]);
    }
    return 0;
}
