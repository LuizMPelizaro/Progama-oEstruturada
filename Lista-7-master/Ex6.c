#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    int i,n,a[20],j;
    for(i = 0; i < 20; i++)
    {
        a[i] = 49 + rand()%50;
        n = 1;
        for (j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                n++;
            }
        }
        if (n == 1){
               printf("%2i\n",a[i]);
        }
    }
    return 0;
}
