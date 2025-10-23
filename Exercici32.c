//Fes un programa que demani 5 números i al final et mostri la mitja dels 5 números.

#include <stdio.h>

int main()
 {
    int n1, n2, n3, n4, n5;
    int sumN;
    int resultat;
     printf("Diguis un primer nombre: \n");
     scanf("%d",&n1);
     printf("Diguis un segon nombre: \n");
     scanf("%d",&n2);
     printf("Diguis un tercer nombre: \n");
     scanf("%d",&n3);
     printf("Diguis un quart nombre: \n");
     scanf("%d",&n4);
     printf("Diguis un cinquè nombre: \n");
     scanf("%d",&n5);   
    
    sumN=n1+n2+n3+n4+n5;
    resultat=sumN/5;
    printf("La mitja aritmètica dels 5 nombres és %d\n", resultat);
 }

 