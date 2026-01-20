#include <stdio.h>
#include <string.h>
#include <ctype.h>
void laterceralletra(char * frase ){
    printf("%c \n", frase[2]);
}

int main(){
    char frase[128];
    printf("Diguis una paraula \n");
    fgets(frase, sizeof(frase), stdin);
    strtok(frase, "\n");
    laterceralletra(frase);
}