#include <stdio.h>

int main(){
    int num;
    int doble;
    printf("Digues un nombre. \n");
    scanf("%d",&num);
    if(num>0){
        printf("El %d és positiu \n", num);
    }else{
        printf("El %d és negatiu", num);
    }
    doble=num*2;
    printf("El doble del nombre és: %d", doble);
}