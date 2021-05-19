#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f,i,r = 0;
    srand(time(NULL));
    printf("Digite um numero ");
    scanf("%i",&f);
    for (i = f-1; i>=0; i--)
    {
        if (i == f-1)
        {
            r = f * i;
        }
        else if (i != 0)
        {
            r = r * i;
        }
    }
    printf("%i",r);
    return 0;
}
