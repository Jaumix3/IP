/*Declara una variable de tipus cadena i dona-li el valor “
endavant”. 
Llegeix del teclat una nova paraula secreta. 
Si la paraula que has llegit del teclat coincideix amb 
“endavant” (el que hi ha guardat a la nostra variable), 
et mostrarà el missatge: “la porta està oberta”. 
Sinó, “torna a provar”. En tots dos casos acaba.
*/

#include <stdio.h>
#include "string.h"

int main(){
    //frase[strcpn(frase, '\n')='\0']
    char secret[8]="endavant";
    char contrasenya[8];
    printf("la porta està tancada, has de mester introduïr la contrasenya correcte: \n");
    fgets(contrasenya, sizeof(contrasenya), stdin);
    // contrasenya[strcspn(contrasenya, '\n')='\0'];
    if (strcmp(contrasenya,secret)==0){
        printf("La porta està oberta. \n");
    }else{
        printf("hauràs de tornar a provar... \n");
    }
}
