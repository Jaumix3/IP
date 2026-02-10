#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//rand()%1rnombre+darrernombre

int main(){
    int num, n=0, n1=0;
    srand(time(NULL));
    rand();
    num = (rand()*20/RAND_MAX)+1;
    for (n=0; num<20; n++){
        printf("%d \n", num);
        n1++;
    }
    printf("Han sortit %d nombres \n", n1);
}