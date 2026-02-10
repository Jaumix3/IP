#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    FILE *f;
    int num;
    if ((f = fopen("exerciciB.txt", "w")) == NULL){
        printf("ERROR, no s'ha pogut obrir el fitxer :(");
    }else{
        printf("Diguis un nombre: ");
        scanf("%d", &num);
        fprintf(f, "%d", num);
    }
}