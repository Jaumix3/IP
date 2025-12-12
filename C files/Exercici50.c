//Escriu un programa que et demani una frase de dos paraules. Llavors mostri les paraules en ordre invers. Exemple: “Hola Pep” t’ha de mostrar: 
// c“Pep Hola”. Has de recorrer la frase fins trobar un espai i quan el troba imprimeix a partir d’aquí la resta de caràcters. 
// cLlavors tornem a començar del principi i en arribar a l’espai en blanc, aturo d’imprimir.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[128];
    int f;
    printf("Digues una frase: \n");
    fgets(frase, sizeof(frase), stdin);
    int len=strlen(frase);
    for(f=len; f>=0; f--){
        printf("%c", frase[f] );
        
    }
}