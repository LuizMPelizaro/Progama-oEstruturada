#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    printf("Escolha quants skins voce vai compra\n");
    int n;
    float fl;
    scanf("%i",&n);
    if (n < 10)
    {
        fl = n*1.30;
        printf("Voce comprou %i skins e gastara %0.2f R$\n",n,fl);
    }
    else if (n >= 15)
    {
        fl = n*1.00;
        printf("Voce comprou %i skins e gastara %0.2f R$\n ",n,fl);
    }
    return 0;
}
