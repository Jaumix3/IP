//Fes un programa que et demani una lletra i mostri per pantalla: “és una vocal” o “és una consonant”.

#include <stdio.h>

int main(){
    char lletra;
    printf("Escriu una lletra\n");
    scanf("%c",&lletra);
    if(lletra=='a' || lletra=='e' || lletra=='i' || lletra=='o' || lletra=='u')
    {
        printf("És una vocal\n ");
    }
    else{
        printf("No és una vocal\n ");
    }
}   