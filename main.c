#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"PORTUGUESE");

    int opJogador;
    int goleiro;
    int pontosJogador = 0, pontosGoleiro = 0;

    printf("\t\tEscolha um canto do gol para chutar.\n");

    printf("\t\t|==================================|\n");
    printf("\t\t|                                  |\n");
    printf("\t\t|             (° - °)              |\n");
    printf("\t\t|           -----|-----            |\n");
    printf("\t\t|                |                 |\n");
    printf("\t\t|               / \\                |\n");
    printf("\t\t|              /   \\               |\n");
    printf("\t\t|                                  |\n");
    printf("\t\t|                                  |\n");
    printf("\t\t|  0            1               2  |\n");

    for(int i = 0;i < 3;i++) {

        printf("\nPlacar do jogo %d X %d \n",pontosGoleiro,pontosJogador);

        printf("Qual sua opção de chute: ");
        scanf("%d",&opJogador);

        srand(time(NULL)); //gerar números aleatórios de 0 até 3.
        goleiro = rand() % 3;

        printf("O goleiro foi para o canto %d \n",goleiro);

        if(goleiro == opJogador) {
            printf("O goleiro defendeu seu chute.\n");
            pontosGoleiro++;
        }else {
            printf("GOOLL\n");
            pontosJogador++;
        }
    }

    printf("----------------------------------\n");

    printf("PLACAR: %d x %d \n",pontosGoleiro,pontosJogador);
    if(pontosJogador > pontosGoleiro) {
        printf("Você venceu.");
    }else{
        printf("O goleiro venceu");
    }

    return 0;
}
