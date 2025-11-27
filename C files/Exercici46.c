/*Fes un programa que llegeixi una frase i compti el nombre de vocals que hi ha. Per exemple la frase: “HOLA COM VA.” Generaria la sortida:
Num. De A: 2, num E: 0, num I: 0, num. O: 2, num. U: 0. Hi ha 4 vocals
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char paraula[128];
    int p;
    int a=0, e=0, i=0, o=0, u=0;
    printf("Digues una paraula: ");
    fgets(paraula, sizeof(paraula), stdin);
    strtok(paraula, "\n");
    for(p=0; p<strlen(paraula); p++){
        switch(paraula[p]){
            case 'a':
            case 'A':
                a++;
                break;
            case 'e':
            case 'E':
                e++;
                break;
            case 'i':
            case 'I':
                i++;
                break;
            case 'o':
            case 'O':
                o++;
                break;
            case 'u':
            case 'U':
                u++;
                break;
            default:
                break;
        }
    }
            printf("Num. De A: %d, num E: %d, num I: %d, num. O: %d, num. U: %d. Hi ha %d vocals", a, e, i, o, u, a+e+i+o+u);

}

// if(paraula[i]=='a' || paraula[i]=='e' ||paraula[i]=='i' ||paraula[i]=='o' ||paraula[i]=='u'){
    // printf("");
// }
// else{
    // printf("%c", paraula[i]);
// }