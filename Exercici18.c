/*Fes un programa que llegeixi una lletra i llavors un nombre amb decimals. Mostra llavors el nombre i després sa lletra.*/

#include <stdio.h>
int main()
{
    double num;
    char lletra;
    scanf("%lf\n",&num);
    scanf("%c",&lletra );
    printf("Aquest és el nombre: %lf\n",num);
    printf("Aquesta és la lletra: %c\n",lletra);
}