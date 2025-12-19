#include <stdio.h>

int main(){
    int num;
    int n=0;
    int nombres=0;
    do{
        printf("Ves dient nombres: \n");
        scanf("%d", &num);
        n++;
        nombres=nombres+num;
    }while(num!=0);
    printf("S'han introduït %d i tots els nombres sumen un total de %d ",n-1 ,nombres );
    
}