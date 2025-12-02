// Escriure un programa per xifrar o desxifrar una frase. Mitjançant un menú el programa hauria de permetre les següents opcions: 
// a) Introduir el codi de xifrat
// b) veure el codi
// c) xifrar una frase
// d) desxifrar una frase
// s) Sortir. 
// Treballarem amb 26 caràcters que es corresponen amb les lletres majúscules. El codi consisteix en un nombre enter entre 1 i 26. Per codificar sumem aquest nombre a la lletra i n’obtenim una de nova. Per desxifrar restem. A l’opció a introduïm aquest codi (un número).
// A l’opció c llegim una cadena i després la recorrem amb un bucle for lletra a lletra. Per cada lletra sumem el codi a la lletra original de la cadena. Per exemple, amb el codi 3 la lletra A es transformaria en la D. El problema és quan ens passem de la ‘Z’. Per exemple, tenim una X i un codi 3: Al sumar ens surt un caràcter extrany. Quan ens movem fora del conjunt de lletres caldrà retornar a l’inici de l’abecedari, restant  26 a la lletra modificada. Llavors imprimirem la lletra resultant.
// Per desxifrar la situació es similar (caldrà sumar). Caldrà verificar que ens passem ara de la ‘A’ i sumar 26. 
// La prova  a fer és ABCXYZ amb 3, es transforma en DEFABC.
// 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char op;
    char codixif[128];
    printf("----------------------------------------------- \n");
    printf("Tria una opció: \n a) Introduïr el codi xifrat \n b) Veure el codi \n c) Xifrar una frase \n d) Desxifrar una frase \n s) Sortir \n");
    printf("----------------------------------------------- \n");
    scanf("%c", &op);
    do{
        switch (op){
            case 'a':
                printf("Introduesqui el codi xifrat: \n");
                fgets(codixif, sizeof(codixif), stdin);
                strtok(codixif, "\n");
                break;
            case 'b':
                printf("El codi és el següent: ");
                break;
            case 'c':
                printf("Introduèsqui un codi: \n");

        }
    }while(op!='s');
}