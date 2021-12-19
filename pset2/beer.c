#include <stdio.h>

int main(void) {

    for (int cervejas = 10; cervejas > 0; cervejas--) {
        int cervejasNoMuro = cervejas - 1;
        if (cervejasNoMuro == 0) {
            printf("%i garrafa de cerveja no muro, bebo uma, jogo no lixo, nenhuma garrafa no muro...\n", cervejas);
        } else if (cervejas == 1) {
            printf("%i garrafas de cerveja no muro, bebo uma, jogo no lixo, %i garrafa no muro...\n", cervejas, cervejasNoMuro);
        } else {
            printf("%i garrafas de cerveja no muro, bebo uma, jogo no lixo, %i garrafas no muro...\n", cervejas, cervejasNoMuro);
        }
    }
    return 0;
}
