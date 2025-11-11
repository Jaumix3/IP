//Fes un programa que calculi l’àrea d’un cercle, 
//un rectangle o un triangle.

#include <stdio.h>

int main(){
    const PI = 3.141592;
    int radi;
    int base;
    int altura;
    int area;
    char op1;

    printf("Quina area vols calcular?\n C-Cercle\n T-Triangle\n R-Rectangle\n");
    scanf("%c",op1);
    
    if(op1=='T')
        printf("Quina és la base?");
        scanf("%d",&base);
        printf("Quina és la altura?");
        scanf("%d",&altura);
        area=base*altura;
        printf("L'area del triangle:%d",&area);
}