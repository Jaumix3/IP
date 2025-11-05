//Escriu un programa que llegeixi 10 lletres. 
// Després de llegir-les, mostra la que va en primer 
// lloc en l’alfabet.

#include <stdio.h>

int main()
{
    char ll;
    int ps1;
    int ps2;
    int min, max;
    printf("Introdueix 10 lletres:\n");
    scanf("%c",&ll);
    
    for(int vegades=0; vegades<9; vegades++)
    {
        printf("Introdueix 10 nombres:\n");
        scanf(" %c",&ll);
        if (ll)
        {
            min=ll;
        }
        if (ll>max)
        {
            max=ll;
        }

    }
    printf("");
}