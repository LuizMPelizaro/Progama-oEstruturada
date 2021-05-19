#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a[10],i,b;
    b = -1;
    for (i = 2; i <= 20; i++)
    {
        if (i%2 == 0){
            a[b]= i;
            printf("%i\n",a[b]);
            b++;
        }
    }
    return 0;
}
