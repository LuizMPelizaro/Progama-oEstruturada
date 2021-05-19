#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a[50],i,n,M = -1,m = RAND_MAX;
    for (i = 0; i < 50; i++)
    {
        a[i] = rand();
        if (a[i] > M)
        {
            M = a[i];
        }
        else if (a[i] < m)
        {
            m = a[i];
        }
    }
    printf("O menor numero é : %i\n",m);
    printf("O maior numero é : %i\n",M);
    return 0;
}
