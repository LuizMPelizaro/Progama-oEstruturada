#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    printf("\tEscreva um numero\n");
    int n,i;
    scanf("%i",&n);
    for (i = 0; i < n;i++){
        printf("%i\n",i);
    }
    return 0;
}
