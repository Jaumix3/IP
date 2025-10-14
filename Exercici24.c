//Fes un programa que demani un número i si el número està entre 100 i 200, digui “número correcte”.

#include <stdio.h>

int main(){
    int numero;
    printf("Esrigui un número ");
    scanf("%d",&numero);
    if (numero>=100 && numero<=200)
    {
        printf("Numero Correcte\n");
    }
    else{
        printf("Numero incorrecte\n");
    }
}
