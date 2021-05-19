#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    printf("Digite se voce deseja 1-impar ou 2-par e um numero de 0 a 5\n");
    int n1,n2,i,r;
    scanf("%i%i",&i,&n1);
    n2 = rand() % 6;
    printf("O numero da maquina foi %i\n",n2);
    printf("O seu numero foi %i\n",n1);
    r = (n1+n2)/2;
    if (i == 1){
        if (r == 1)
        {
            printf("Voce ganhou\n");
        }
        else
        {
            printf("A Maquina ganhou\n");
        }
    }
    else if (i == 2)
    {
        if(r == 0)
        {
            printf("voce ganhou\n");
        }
        else("A maquina ganhou\n");
    }
    else {
        printf("ERRO escolha uma opçao valida");
    }
    return 0;
}
