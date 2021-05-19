#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
    printf("LOJA\n");
    int d,i,min = 1000, max = 2000;
    d = min + rand() % (max - min);
    printf("Voce tem %i em gold escolha um item para ser comprado :\n",d);
    printf("1-Abraço do Serjão: 1300 gold\n2-Sedenta por doce: 1700 gold\n3-Ampulheta do Zhé: 1500 gold\n4-Anel da Dora Aventureira: 500 gold\n5-Rapadura de Uarmogui: 1900 gold\n");
    scanf("%i",&i);
    if (i == 1){
        if (d >= 1300){
            printf("Compra feita com sucesso\n");
            printf("Valor item 1300 gold\n");
            printf("Voce ainda tem %i de gold restante\n",d-1300);
        }
        else if (d <1300){
            printf("Voce nao tem o gold nessesario para a compra\n");
            printf("Saldo atual %i\n",d);
            printf("Voce precisa de %i de gold\n",1300-d);
        }
    }
    else if (i == 2){
        if (d >= 1700){
            printf("Compra feita com sucesso\n");
            printf("Valor item 1700 gold\n");
            printf("Voce ainda tem %i de gold restante\n",d-1700);
        }
        else if (d <1700){
            printf("Voce nao tem o gold nessesario para a compra\n");
            printf("Saldo atual %i\n",d);
            printf("Voce precisa de %i de gold\n",1700-d);
        }
    }
    else if (i == 3){
        if (d >= 1500){
            printf("Compra feita com sucesso\n");
            printf("Valor item 1500 gold\n");
            printf("Voce ainda tem %i de gold restante\n",d-1500);
        }
        else if (d <1500){
            printf("Voce nao tem o gold nessesario para a compra\n");
            printf("Saldo atual %i\n",d);
            printf("Voce precisa de %i de gold\n",1500-d);
        }
    }
    else if (i == 4){
        if (d >= 500){
            printf("Compra feita com sucesso\n");
            printf("Valor item 500 gold\n");
            printf("Voce ainda tem %i de gold restante\n",d-500);
        }
        else if (d <500){
            printf("Voce nao tem o gold nessesario para a compra\n");
            printf("Saldo atual %i\n",d);
            printf("Voce precisa de %i de gold\n",500-d);
        }
    }
    else if (i == 5){
        if (d >= 1900){
            printf("Compra feita com sucesso\n");
            printf("Valor item 1900 gold\n");
            printf("Voce ainda tem %i de gold restante\n",d-1900);
        }
        else if (d <1900){
            printf("Voce nao tem o gold nessesario para a compra\n");
            printf("Saldo atual %i\n",d);
            printf("Voce precisa de %i de gold\n",1900-d);
        }
    }
    else {
        printf("Erro!! item nao existente");
    }

    return 0;
}
