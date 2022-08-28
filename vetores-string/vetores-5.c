#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    int i, valor = 0;
    char entrada[15], inversa[15];

    printf("Digite uma palavra: ");
    gets(entrada);

    for(i = 0; entrada[i]; i++){
        entrada[i] = tolower(entrada[i]);
 }

    strcpy(inversa, entrada);
    strrev(inversa);
    valor = strcmp(entrada, inversa);

    if (valor == 0)
        printf("Palindroma\n");
    else
        printf("Nao e palindroma\n");
}
