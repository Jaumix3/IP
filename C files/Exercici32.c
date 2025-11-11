//Fes un programa que demani 5 números i al final et 
//mostri la mitja dels 5 números.

#include <stdio.h>

int main(){
   int n;
   int num;
   int avg;
   int sum;
   for(n=0;n<5;n++){
      printf("Digues un nombre\n");
      scanf("%d",&num);
      sum=sum+num;
   }
   avg=sum/5;
   printf("%d",avg);
}

 