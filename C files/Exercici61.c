#include <stdio.h>
#include <string.h>
#include <ctype.h>

int digit(int num){
    if (num>=48 && num<=57){
        return 1;
    }
    return 0;
}

int main(){
    int num;
    printf("Diguis un nombre: \n"); 
    scanf("%d", &num);
    if(digit(num)){
        printf("És Digit!\n");
    }else{
        printf("No és digit \n");
    }
}

