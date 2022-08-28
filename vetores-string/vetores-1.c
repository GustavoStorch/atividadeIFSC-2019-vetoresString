#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char entrada[5], teste;
    int tam, dv;

    printf("Digite um codigo de 5 digitos: ");
    gets(entrada);

    tam = strlen(entrada);
    if (tam == 5){
        dv = (((entrada[0]-48)*5)+((entrada[1]-48)*4)+((entrada[2]-48)*3)+((entrada[3]-48)*2)+((entrada[4]-48)*1)) % 7;
        printf("DV %d", dv);
    }else{
        printf("O codigo nao possui 5 digitos!");
    }
}
