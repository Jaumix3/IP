#include <stdio.h>
#include <string.h>
#include <ctype.h>

double cm_ps(double cm){   
    double ps=2.54;
    return cm*ps ;
}

double ps_cm(double ps){
    double cm;
    return ps/cm;
}

int main(){
    double num;
    int op; 
    printf("Tria una opció: \n 1. de cm a polsades \n 2. De polsades a cm \n");
    scanf("%d", &op);
    switch(op){
        case 1:
            scanf("%lf", &num);
            printf("%lf\n", cm_ps(num));
            break;
        case 2:
            scanf("%lf", &num);
            printf("%lf\n", ps_cm(num));
            break;
        default:
            break;
    }
}