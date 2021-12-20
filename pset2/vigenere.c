#include<stdio.h>
#include<string.h>

int main() {
    char msg[100];
    char key[100];

    printf("Digite a palavra de base para criptografia: \n");
    fgets(key, sizeof(key), stdin);
    printf("Digite a mensagem para ser criptografada: \n");
    fgets(msg, sizeof(msg), stdin);

    int msgLen = strlen(msg), keyLen = strlen(key), i, j;

    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];

    for (i = 0, j = 0; i < msgLen; ++i, ++j) {
        if (j == keyLen)
            j = 0;

        newKey[i] = key[j];
    }

    newKey[i] = '\0';
    for (i = 0; i < msgLen; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';

    encryptedMsg[i] = '\0';
    printf("%s", encryptedMsg);
    return 0;
}
