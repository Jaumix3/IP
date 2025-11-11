//Mostrar el numeros que van del 100 al 200. (for) 
//demanar numero usuari fins el numero donat fins el menos 100

#include <stdio.h>

int main(){
    int n;
    int num;
    printf("Digues un nombre: \n");
    scanf("%d",&num);
    for(n=num;n>=-100;n--){
        printf("%d \n",n);
    } 
}