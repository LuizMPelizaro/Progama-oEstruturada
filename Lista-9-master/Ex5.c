#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  divisao (int n2,int n1){
    int resultado;
    if (n1%n2 == 0){
        resultado = 1;
    }
    else if (n1%n2 == 1){
        resultado = 0;
    }
    return (resultado);
}
int main()
{
    srand(time(NULL));
    int n,n1,i;
    for (i = 0;i < 10;i++){
        n = rand()% 100;
        n1 = rand()% 100;
        printf("%i / %i\n",n,n1);
       printf("%i\n",divisao(n,n1));
    }
    return 0;
}
