#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int prim_nomb(int n1, int n2){
    int sum;
    sum=n1+n2;
    return sum;
}


int main(){
    int n1, n2;
    printf("Digues un nombre: \n");
    scanf("%d", &n1);
    printf("Digues un segon nombre: \n");
    scanf("%d", &n2);
    printf("La suma dels nombres és: %d\n", prim_nomb(n1, n2));
}