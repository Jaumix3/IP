#include <stdio.h>
#include <string.h>
#include <ctype.h>

int comptarvocals(char * p){
    int n=0;
    int v=0;
    for(n; n<strlen(p); n++){
        switch (tolower(p[n]))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            v++;
            break;
        default:
            break;
        }
   }
        return v;
}

int main(){
    char p[128];
    fgets(p, sizeof(p), stdin);
    strtok(p, "\n");
    printf("%d",comptarvocals(p));

}