#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    printf("Bem vindo a roleta escolha uma das opções!\n1-Numero exato 0 - 100 a aposta multiplica em 100%\n2-numero par ou impar a aposta multiplca em 2 \n3-Intervalos a aposta quadriplica\n");
    int o;
    float v;
    printf("Escreva o valor da aposta\n");
    scanf("%i%f",&o,&v);
    if (o == 1)
    {
        int n,nr;
        printf("Escolha um numero de 1 a 100\n");
        scanf("%i",&n);
        nr = rand() % 101;
        if (nr == n)
        {
            float vt;
            vt = v *100;
            printf("Você ganhou \nO numero sortiado foi: %i \nO valor que voce ganhou é de : %f $\n",nr,vt);
        }
        else if (nr != n)
        {
            printf("Você perdeu !!!\n O numero sortiado foi : %i",nr);
        }
        else
        {
            printf("Erro numero fora da dos 100");
        }
    }
    else if (o == 2)
    {
        int p,nr,nrl;
        printf("Escolha a paridade que voce quer \n1-Impar\n2-Par\n");
        scanf("%i",&p);
        nr = rand() % 101;
        if (p == 1)
        {
            nrl = nr%2;
            if (nrl == 0)
            {
                printf("Voce perdeu \nO numero sortiado foi %i\n",nr);
            }
            else if(nrl == 1)
            {
                printf("Voce ganhou \n O numero sortiado foi %i\n O valor que voce ganhou foi de :%0.2f $\n",nr,v*2);
            }
        }
        else if ( p == 2 )
        {
            nrl = nr%2;
            if (nrl == 0)
            {
                printf("Voce ganhou \n O numero sortiado foi %i\n O valor que voce ganhou foi de :%0.2f $\n",nr,v*2);
            }
            else if(nrl == 1)
            {
                printf("Voce perdeu \nO numero sortiado foi %i\n",nr);
            }
        }
        else
        {
            printf("ERRO");
        }
    }
    else if (o == 3)
    {
        printf("Escolha um dos intervalos\n1-0 a 24\n2-25 a 49\n3-50 a 74\n4-75 a 100\n");
        int i,nr;
        scanf("%i",&i);
        nr = rand() %101;
        if (i == 1)
        {
            if (nr >= 0 && nr <25)
            {
                printf("Você ganhou \n O numero sortiado foi %i\n O valor que você ganhou foi de : %0.2f $",nr,v*4);
            }
            else if (nr > 24 && nr <50)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 50 && nr < 75)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 75 && nr < 101)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
        }
        else if (i == 2)
        {
            if (nr >= 0 && nr <25)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 24 && nr <50)
            {
                printf("Você ganhou \n O numero sortiado foi %i\n O valor que você ganhou foi de : %0.2f $",nr,v*4);
            }
            else if (nr > 50 && nr < 75)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 75 && nr < 101)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
        }
        else if (i == 3)
        {
            if (nr >= 0 && nr <25)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 24 && nr <50)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 50 && nr < 75)
            {
                printf("Você ganhou \n O numero sortiado foi %i\n O valor que você ganhou foi de : %0.2f $\n",nr,v*4);

            }
            else if (nr > 75 && nr < 101)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
        }
        else if (i == 4)
        {
            if (nr >= 0 && nr <25)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 24 && nr <50)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 50 && nr < 75)
            {
                printf("Você perdeu \n O numero sortiado foi %i\n");
            }
            else if (nr > 75 && nr < 101)
            {
                printf("Você ganhou \n O numero sortiado foi %i\n O valor que você ganhou foi de : %0.2f $\n",nr,v*4);
            }
        }
    }
}
