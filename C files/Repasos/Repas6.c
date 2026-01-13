#include <stdio.h>
int main(){
    double num, n;
    double total;
    double avg;
    char op;
    do{
        printf("Ves dient nombres: \n");
        scanf("%lf", &num);
        total=total+num;
        n++;
        printf("Vols continuar? \n");
        scanf(" %c", &op);
    }while(op!='n');
    avg=total/n;
    printf("La mitja dels nombres introduïts és: %lf \n", avg);
}