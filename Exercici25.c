//Fes un programa que et demani una lletra i miri si és la lletra a. Si ho és ha de dir “És una a”. Si no ho és ha de dir no és una lletra a.
#include <stdio.h>

int main(){
    char lletra;
    printf("Escriu una lletra: ");
    scanf("%c",&lletra);
    if (lletra=='a')
    {
        printf("La lletra és una 'A'");
    }
    
    else
    {
        printf("No és una 'A'");
    }
}
