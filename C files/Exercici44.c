/*Escriu el programa que et demana una cadena qualsevol 
i tan sols treu per pantalla les majúscules inserides. */

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
        if(isupper(paraula[p])){
            printf("%c \n", paraula[p]);
        }
    }
}