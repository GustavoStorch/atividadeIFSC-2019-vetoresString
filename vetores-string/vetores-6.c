#include<stdio.h>
#include<string.h>
void main(){
    char palavra1[100], palavra2[100];
    int i;

    printf("Digite uma palavra: ");
    scanf("%s",&palavra1);
    printf("Digite outra palavra: ");
    scanf("%s",&palavra2);


    if (strstr(palavra1, palavra2) != NULL) {
        for(i = 0; i < 20; i++) {
            if(palavra1[i] == palavra2[i]) {
                i = 20;
                printf("Achou :)\n");
                printf("Posicao %d", strstr(palavra1, palavra2) - palavra1);
            }
        }
    }
    else{
        printf("Nao achou :(");
    }
}
