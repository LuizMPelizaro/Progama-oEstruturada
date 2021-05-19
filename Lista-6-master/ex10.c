#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    srand(time(NULL));
    int a[20],i,n;
    for (i = 0 ;i < 20; i ++ ){
        n = 97 + rand() % 25;
        a[i] = n;
        printf("%i \t%c \n", a[i],a[i]);
    }
}
