#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n=0, num=0, n1=0;
    srand(time(NULL));
    rand();
    for (n=0;n<14; n++){
        num=rand()%3+0;
        if (num>0 && num<3){
            n1++;
            printf("%d\n", num);
        }else if(num=0){
            
            printf("x");
        }
    }
}
