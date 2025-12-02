//Escriu un programa que inverteixi els caràcters de l’entrada. Això és: escrius Hola que tal i et mostra: lat euq aloH.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char paraula[128];
    int i, len;
    printf("Escriu alguna cosa: \n");
    fgets(paraula, sizeof(paraula), stdin);
    strtok(paraula, "\n");
    len = strlen(paraula);
    for (i=len; i>=0; i--){
        printf("%c \n", paraula[i]);
    }
        
}