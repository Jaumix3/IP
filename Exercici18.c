/*Fes un programa que llegeixi una lletra i llavors un 
nombre amb decimals. 
Mostra llavors el nombre i després sa lletra.*/

#include <stdio.h>
int main(){
    double n1;
    char l1;
    printf("Digues un nombre: \n");
    scanf("%d",&n1);
    printf("Digues una lletra \n");
    scanf(" %c",&l1);
    printf("%d %c", n1, l1);    
}