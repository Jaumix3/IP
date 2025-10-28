//Feu un programa que llegeixi 10 nombres 
//enters (tant positius com negatius) i 
//finalment digui el major i el menor de tots els nombres llegits.

#include <stdio.h>

int main()
{
    double n;
    int vegades=0;
    for(vegades=0; vegades<10; vegades+1)
    {
        printf("Diguis un nombre:\n");
        scanf("%lf",&n);
    }
}