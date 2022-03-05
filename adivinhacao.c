#include <stdio.h>

int main()
{
    printf("******************* \n");
    printf("Bem vindo ao jogo \n");
    printf("******************* \n");

    int numerosecreto = 42;
    int chute;

    printf("Qual e o seu chute? \n");
    scanf("%d", &chute);
    // printf("Seu chute foi %d \n", chute);

    if (chute == numerosecreto)
    {
        printf("Parabens,voce acertou! \n");
    }
    else
    {

        if (chute > numerosecreto)
        {
            printf("Seu chute é maior que o número secreto \n");
        }

        if (chute < numerosecreto) {
            printf("Seu chute é menor que o número secreto \n");
        }
    }

    return 0;
}