/*Escriure un algorisme que llegeixi deu números i després 
els escrigui en ordre invers a l'entrada.
*/
#include <stdio.h>
#include <string.h>


int main(){
    int numero[10];
    int num;
    int n;
    for (n=0; n<10; n++){
        printf("Diguis %d nombres \n", 10-n);
        scanf("%d", &num);
        numero[n] = num+numero[n];
    }
    for(n=9; n>=0; n--){
        printf("%d ", numero[n]);
    }

}