#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a[4],i;
    for (i = 0; i < 4; i++)
    {
        a[i] = rand()%2;
        printf("%i ",a[i]);
    }
    return 0;
}
