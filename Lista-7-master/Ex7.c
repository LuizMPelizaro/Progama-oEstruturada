#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int i,n,a[30],j;
    for(i = 0; i < 30; i++)
    {
        a[i] =rand()%100;
        n = 1;
        for(j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                n++;
            }
        }
        printf("%i \t%i\n",n,a[i]);
    }
    return 0;
}
