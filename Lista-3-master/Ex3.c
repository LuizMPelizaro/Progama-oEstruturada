#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    printf("Tente adivinha o numero de 0 a 100\n");
    int n,n1;
    n = rand()%101;
    scanf("%i",&n1);
    if (n != n1)
    {
        printf("Voce errou tente novamete\n");
        scanf("%i",&n1);
        if(n != n1)
        {
            printf("Voce errou tente novamente\n");
            scanf("%i",&n1);
            if(n != n1)
            {
                printf("Voce errou tente novamente\n");
                scanf("%i",&n1);
                if(n != n1)
                {
                    printf("Voce errou tente novamente");
                    scanf("%i",&n1);
                    if (n != n1)
                    {
                        printf("Voce erro fim de jogo");
                    }
                    else if (n == n1)
                    {
                        printf("Voce acertou");
                    }
                }
            }
            else if (n == n1)
            {
                printf("Voce acertou");
            }
        }
        else if(n == n1)
        {
            printf("Voce acertou\n");
        }
    }
    else if (n == n1)
    {
        printf("VOCE ACERTO ");
    }
    return 0;
}
