#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void) {
    srand(time(NULL));

    int skittles = rand() % 1024;

    printf("Olá! Eu sou uma máquina de balas falante! Adivinhe quantos Skittles têm dentro de mim. Dica: Estou pensando em um número entre 0 e 1023. Qual é ele?");

    int usuarioInput;

    while (usuarioInput != skittles) {
        scanf("%d", &usuarioInput);

        if(usuarioInput < skittles && usuarioInput > 0) {
            printf("Haha! Tenho muito mais Skittles do que isso. Tente novamente.");
        } else if(usuarioInput < 0 || usuarioInput > 1023) {
            printf("Não tente ser difícil... Adivinhe novamente.");
        } else if(usuarioInput > skittles) {
            printf("Ok, eles não são tantos assim. Tente novamente.");
        } else if(usuarioInput == skittles) {
            printf("Você está certo! Nom nom nom nom.");
        }
    }
    return 0;
}
