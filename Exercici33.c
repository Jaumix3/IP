//Fer un programa que vagi demanant nombres a l’usuari i seguidament pregunti si en vol introduir un altre. En el cas que l’usuari digui que no, mostri la seva suma.

#include <stdio.h>

int main()
{
    int a=1;
    int n; 
    char op;
    int sum;
    do  
    {
        printf("Digues alguns nombres: \n");
        scanf("%d",&n);
        sum=sum+n;
        printf("Vols continuar? S/n \n");
        fflush(stdin);
        scanf(" %c",&op);                       
    } while(op=='S' || op=='s'); 
    printf("%d \n",sum);
}

 