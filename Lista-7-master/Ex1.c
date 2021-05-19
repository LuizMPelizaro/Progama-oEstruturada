#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a[10],i,j,c;
    for (i = 0 ; i < 10; i++)
    {
        do
        {
            a[i] = 1 + rand()% 20;
            for (j = 0; j < 10; j++)
            {
                if (a[i] == a[j])
                {
                    c = 0;
                }
            }
        }
        while(c > 1);
        {
            printf("%2i ",a[i]);
        }
    }

    return 0;
}
