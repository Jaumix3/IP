//Escriu un programa que llegeixi una cadena i 
//mostri per pantalla la cadena amb les vocals substituïdes 
//per punts.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char paraula[128];
    int p;
    printf("Digues una paraula qualsevol: \n");
    fgets(paraula, sizeof(paraula), stdin);
    strtok(paraula, "\n");
    for(p=0;p<strlen(paraula);p++){
        if(paraula[p]=='a' ||paraula[p]=='e' ||paraula[p]=='i' ||paraula[p]=='o' ||paraula[p]=='u'){
            printf(".");
        }
        else{
            printf("%c", paraula[p]);
        }
    }
}