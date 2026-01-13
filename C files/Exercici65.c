#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i=0;
    int num;
    srand(time(NULL));
    rand();
    printf("MAX: %d \n",RAND_MAX);
    for(i=0; i<6; i++){
        num = rand()%21-10;
        printf("%d \n", num);
    }
}