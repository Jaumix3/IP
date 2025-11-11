//Escriu un programa que demani un nombre del 1 al 7 i digui el dia de la 
//setmana corresponent a aquest nombre.

#include <stdio.h>

int main()
{
    int op;
    printf("Digues un nombre de l'1 al 7: \n");
    scanf("%d", &op);
    switch(op){
        case 1:
            printf("Vostè ha triat dilluns\n");
            break;
        case 2:
            printf("Vostè ha triat el dimarts \n");
            break;
        case 3: 
            printf("Vostè ha triat Dimecres\n");
            break;
        case 4:
            printf("Vostè ha triat Dijous\n");
            break;
        case 5:
            printf("Vostè ha triat divendres\n");
            break;
        case 6:
            printf("Vostè ha triat disabte\n");
            break;
        case 7: 
            printf("Vostè ha triat diumenge\n");
        case 8:
            break;
    }         
} 