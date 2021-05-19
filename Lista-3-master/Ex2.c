#include <stdio.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    printf("Escreva uma das opçoes\n0-Pedra\n1-Papel\n2-tesoura\n");
    int n1,n2;
    scanf("%i",&n1);
    n2 = rand() % 3 ;
    if(n1 == 1)
    {
        printf("Voce escolheu Papel\n");
    }
    else if (n1 == 2)
    {
        printf("Voce escolheu tesoura\n");
    }
    else if (n1 == 0)
    {
        printf("Voce escolheu pedra\n");
    }
    if(n2 == 1)
    {
        printf("A maquina escolheu Papel\n");
    }
    else if (n2 == 2)
    {
        printf("A maquina escolheu tesoura\n");
    }
    else if (n2 == 0)
    {
        printf("A maquina escolheu pedra\n");
    }
    if (n1 == 0 && n2 == 0)
    {
        printf("Empate\n");
    }
    else if (n1 == 0 && n2 == 1)
    {
        printf("Voce perdeu\n");
    }
    else if (n1 == 0 && n2 == 2)
    {
        printf("Voce ganhou\n");
    }
    if (n1 == 1 && n2 == 1)
    {
        printf("Empate\n");
    }
    else if (n1 == 1 && n2 == 2)
    {
        printf("Voce perdeu\n");
    }
    else if (n1 == 1 && n2 == 0)
    {
        printf("Voce ganhou\n");
    }
    if (n1 == 2 && n2 == 2)
    {
        printf("Empate\n");
    }
    else if (n1 == 2 && n2 == 0)
    {
        printf("Voce perdeu\n");
    }
    else if (n1 == 2 && n2 == 1)
    {
        printf("Voce ganhou\n");
    }
    else
    {
        printf("Erro escolha uma opçao valida\n");
    }
    return 0;
}
