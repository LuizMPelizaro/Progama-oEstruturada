#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    printf("\tJogo das contas\n");
    int a,b,r,rr,i,v,d;
    d = 0;
    v = 0;
    for (i = 0 ; i <= 9 ; i++){
        a = rand()% 10;
        b = rand()% 10;
        printf("%i + %i = \n",a,b);
        scanf("%i",&r);
        rr = a+b;
        if (rr == r){
            printf("\tVoce acertou !!\n");
            v++;
        }
        else if (rr != r){
            printf("Voce errou !!\n");
            d ++;
            if (d >= 3){
                printf("Voce perdeu todas as chances");
                break;
            }
        }
    }
    printf("Voce ganhou %i\nPerdeu %i \n",v,d);
    return 0;
}
