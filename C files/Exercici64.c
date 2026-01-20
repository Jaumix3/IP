#include <stdio.h>
#include <string.h>
#include <ctype.h>

char lalletrax(char * frase, int num){
    return frase[num];
}

int main(){
    int num;
    char frase[128];
    printf("Diguis un nombre: \n");
    scanf("%d", &num);
    getchar();
    printf("Diguis una paraula o frase: \n");
    fgets(frase, sizeof(frase), stdin);
    printf("%c, %d \n", lalletrax(frase,num), num);
}