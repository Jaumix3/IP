//Fes el mateix però et demanarà un número i et dirà si el número acaba en 0 o no (Ufff, com ho feim això)

#include <stdio.h>

int main(){
    int nombre;
    printf("Diues un nombre: ");
    scanf("%d",&nombre);
    if(nombre %10==0){
        printf("El numero acaba en 0\n");
    }
    else{
        printf("El numero NO acaba en 0\n");
    }
}