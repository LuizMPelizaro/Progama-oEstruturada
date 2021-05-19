#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,c,h,m,s;
    i = 19000;
    j = 0;
    s = 0;
    while (j < i){
        j= j +400;
        c = c +1;
        s = s +300;
    }
    m = s/60;
    h = m/60;
    printf("Voce gastou %i flahses\n",c);
    printf("Voce gastou %i horas %i minutos %i segundos\n",h,m,s);
    return 0;
}
