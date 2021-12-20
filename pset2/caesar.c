#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int key = atoi(argv[1]);
    char frase[100];
    printf("Digite a frase para ser criptografada: ");
    fgets(frase, sizeof(frase), stdin );

    for (int i = 0; i < strlen(frase); i++)
    {
        if (isupper(frase[i]))
        {
            frase[i] = ((frase[i] - 65 + key) % 26) + 65;
        }
        else if (islower(frase[i]))
        {
            frase[i] = ((frase[i] - 97 + key) % 26) + 97;
        }
    }
    printf("%s", frase);
}
