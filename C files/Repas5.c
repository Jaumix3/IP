#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char paraula[40];
    int n=0,  mayus=0, minus=0;
    puts("Digues una frase (max. 40 char.) \n");
    fgets(paraula, sizeof(paraula), stdin);
    strtok(paraula, "\n");
    printf("La frase introduïda és %s \n", paraula);
    printf("La longitud de lacadena és de %d \n", strlen(paraula));
    for(n=0; n<strlen(paraula); n++){
        if(isupper(paraula[n])){
            mayus++;
        }else{
            minus++;
        }
    }
    printf("Hi ha %d majúscules i %d minúscules \n", mayus, minus);
}