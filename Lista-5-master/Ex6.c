#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,u,m,c,d;
    srand(time(NULL));
    n = 1000+rand()%8999;
    printf("%i\n",n);
    m = n/1000;
    c = ((n - (m *1000))/100);
    d = ((n - (m*1000)-(c*100))/10);
    u = (n - (m * 1000)) - (c * 100) - (d * 10);
    printf("Numero = %i \nMilhar = %i\nCentena = %i\nDezena = %i\nUnidade = %i",n,m*1000,c*100,d*10,u);
    return 0;
}
