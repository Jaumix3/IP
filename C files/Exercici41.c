/*Escriu un programa que et demani el nom. Llavors ha de saludar-te:
 Hola .... 
*/

#include <stdio.h>
#include <string.h>

int main(){
    char nom[12];
    printf("Com et dius? \n");
    scanf("%s", &nom);
    printf("Hola %s!! \n ", nom);
}