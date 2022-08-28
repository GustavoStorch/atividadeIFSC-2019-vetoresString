#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char entrada[100];
    int i, y, contador = 0, caracter = 0, tam;
    char vogais[] = "aeiouAEIOU";

    printf ("Digite uma frase: ");
    gets(entrada);

    for(i = 0; i < strlen(entrada); i++){
        if(entrada[i] == ' '){
            tam--;
        }
    }
    for (i = 0;  i < strlen(entrada); i++){
        for (y = 0; y < strlen(vogais); y++){
                if (entrada[i] == vogais[y]){
                        contador++;
                }
        }
    }
    printf("%d caracteres\n", tam);
    printf("%d vogais\n", contador);
}
