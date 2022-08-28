#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char entrada[100];
    int tam, i, posicao;

    printf("Digite uma frase: ");
    fgets(entrada, sizeof(entrada), stdin);

    tam = strlen(entrada);
    for (i = 0, posicao = 0; i < tam; i++, posicao++) {
        if (entrada[posicao] == ' ')
            posicao++;
            entrada[i] = entrada[posicao];
    }
    printf("%s", entrada);
}
