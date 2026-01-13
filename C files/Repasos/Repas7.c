#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n1, n2, op, suma;
    do{
        printf("Tria una opció: \n 1. Introdueix 2 nombres \n 2. Sumar aquests nombres \n 3. Sortir \n ");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Diguis un nombre \n");
                scanf("%d",&n1);
                printf("Diguis un altre nombre \n");
                scanf("%d",&n2);
                break;
            case 2:
                printf("Anem a sumar els dos nombres anteriorment introduïts \n");
                suma=n1+n2;
                printf("");
                break;
            case 3:
                printf("Adéu!");
                break;
        }
    }while(op!=3);
        
}