#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int i,n;
    for (i = 1 ; i<=10;i++){
        n = rand() % 101;
        printf("%i\n",n);
    }
    return 0;
}
