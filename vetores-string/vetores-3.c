#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char entrada[100];
    int i = 0, contador = 0, conta = 0, tam = 0;
    char ascii[100], y;

    printf ("Digite uma frase: ");
    gets(entrada);

    tam = strlen(entrada);
    for(i = 0; i < tam; i++){
        if(entrada[i] >= 65 && entrada[i] <= 90){
            ascii[y] = entrada[i];
            y++;
        }
        if(entrada[i] >= 97 && entrada[i] <= 122){
            conta = entrada[i] - 32;
            ascii[y] = conta;
            y++;
        }
    }
    printf("%s", ascii);
}
