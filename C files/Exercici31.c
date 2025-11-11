//Fes un programa amb dues opcions de menú. L’opció 1 et demana l’edat i et mostra l’any en que vas néixer. 
//L’opció 2 et mostra la informació: Hola que tal. 
//Afegir una 3 opció: sortir. Fins que no premi aquesta opció, 
//el menú seguirà donant voltes.

#include <stdio.h>

int main()
{
    int edat;
    int op;
    int any=2025;
    do{
        printf("Tria una opció: \n 1. Entrar edat\n 2.Salutació\n 3.Sortir\n");
        scanf("%d",&op);
        switch(op){
            case 1: 
                printf("Digues la teva edat: \n");
                scanf("%d",&edat);
                int neixament=any-edat;
                printf("Segons la teva edat vas neixer al %d \n",neixament);
                break;
            case 2: 
                printf("Hola, que tal?\n");
                break;
            case 3:
                break;
        }
    } while(op!=3);
    return 0;

}