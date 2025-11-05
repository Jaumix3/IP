//Feu un programa que llegeixi 10 nombres 
//enters (tant positius com negatius) i 
//finalment digui el major i el menor de tots els nombres llegits.

#include <stdio.h>

int main()
{
    int n;
    int min, max;
    printf("Introdueix 10 nombres:\n");
    scanf("%d",&n);
    min=n;
    max=n;
    for(int vegades=0; vegades<9; vegades++)
    {
        printf("Introdueix 10 nombres:\n");
        scanf("%d",&n);
        if (n<min)
        {
            min=n;
        }
        if (n>max)
        {
            max=n;
        }

    }
    printf("El minim és: %d\n i el maxim:%d\n", min ,max);
}