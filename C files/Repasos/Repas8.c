#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int vec[5], n=0, num=0, suma=0;
    printf("Digues 5 nombres: \n");
    for(n=0; n<5; n++){
        scanf("%d", &vec[n]);
        suma=suma+vec[n];
    }
    printf("Has introduït els següents nombres: ");
    for (n=0; n<5; n++){
        printf("%d ", vec[n]);
    }
    printf("La suma dels nombres és: %d", suma);
}