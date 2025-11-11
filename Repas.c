//Demanar un nombre decimal i multiplicar per 2 si el 
//numero és positiu res, si és negatiu el dividirà per dos
//
#include <stdio.h>

int main(){
    double n1;
    double op;
    printf("Digues un nombre qualsevol: \n");
    scanf("%lf",&n1);
    if(n1>0){
        op=n1*2;
    }
    else{
        op=n1/2;
    }
    printf("El resultat és: %lf", op);
}