// Escriu un programa quan s’executi mostri una taula Ascii. 
// Pista: Prova printf(“%d”,’C’); i printf(“%c”,78);

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    // char paraula[128];
    int n;
    for(n=0; n<128; n++){
        printf("%d | %c \n",n, n);
    }
}
