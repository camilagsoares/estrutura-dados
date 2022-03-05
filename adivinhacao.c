#include <stdio.h>

int main () {
    printf("******************* \n");
    printf("Bem vindo ao jogo \n");
    printf("******************* \n");

    int numerosecreto = 42;
    int chute;

    printf("Qual e o seu chute? \n");
    scanf("%d", &chute);
    // printf("Seu chute foi %d \n", chute);

    if (chute == numerosecreto) {
    printf("Parabens,voce acertou! \n");

    } else {
    printf("Voce errou! \n");

    }

    return 0;
}