#include <stdio.h>

int main()
{
    printf("******************* \n");
    printf("Bem vindo ao jogo \n");
    printf("******************* \n");

    int numerosecreto = 42;
    int chute;

    for (int i = 1; i <= 3; i++)
    {
        printf("Qual e o seu chute? \n");
        printf("Tentativa %d de 3\n", i);
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        int acertou = (chute == numerosecreto);

        if (acertou)
        {
            printf("Parabens,voce acertou! \n");
        }
        else
        {
            int maior = chute > numerosecreto;
            if (maior)
            {
                printf("Seu chute foi maior que o numero secreto \n");
            }
            else
            {
                printf("Seu chute foi menor que o numero secreto \n");
            }
        }
    }
    return 0;
}