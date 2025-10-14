//Fes un programa que llegeixi dos nombres i llavors mostri la multiplicació per pantalla.

#include <stdio.h>
int main(){
    int num1;
    int num2;
    int resultat;
    printf("Digues un nombre ");
    scanf("%d",&num1);
    printf("Digues un segon nombre ");
    scanf("%d",&num2);
    resultat=num1*num2;
    printf("%d\n",resultat);
}