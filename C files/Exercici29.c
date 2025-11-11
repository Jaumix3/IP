//Fer un programa que demani a l’usuari un número i 
//llavors mostri per pantalla els nombres del seu número al 1.

#include <stdio.h>

int main(){
    int n;
    int num;
    printf("Digues un nombre ");
    scanf("%d",&n);
    if (n>0)
        for(num=n; num>=1; num--){
            printf("%d\n",num);
        }
    else
    {
        for(num=n; num<=1; num++)
            printf("%d\n",num);
        }
}