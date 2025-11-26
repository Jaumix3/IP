/*Afegeix al programa de la paraula secreta, 
que segueixi en marxa fins que no escrius 
sa paraula correcta. 
Quan l’escrius mostra la informació i surt.
*/

#include <stdio.h>
#include "string.h"

int main(){
    char secret[9]="endavant";
    char contrasenya[12];
    do{
        printf("la porta està tancada, has de mester introduïr la contrasenya correcte: \n");
        fgets(contrasenya, sizeof(contrasenya), stdin);
        strtok(contrasenya, "\n");
        if (strcmp(contrasenya,secret)==0){
            printf("La porta està oberta. \n");
        }else{
            printf("hauràs de tornar a provar... \n");
        }
    } while (strcmp(contrasenya, secret)!=0); 
}