#include <stdio.h>
#include <string.h>

int main(){
    int numero[10];
    int num=0, n, avg, sum=0;
    char op='a';
    while(op!='n' && op!='N'){
        printf("Digues un nombre \n");
        scanf("%d", &numero[num]);
        getchar();
        num++;
        printf("Vols continuar? S/n \n");
        scanf("%c", &op);
        getchar();
    }
    for(n=0; n<num;n++){
        printf("%d, ",numero[n]);
        sum=sum+numero[n];
    }
    printf("La suma total dels nombre és: %d \n", sum);
    printf("");
    printf("Nombres      Diferència\n");
    printf("-------       -------\n");
    
}