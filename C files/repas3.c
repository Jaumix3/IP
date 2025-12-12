/*Escriu un programa en C que faci el següent:
    Demana a l’usuari quants números vol introduir (un valor entre 1 i 20).
    Llavors l’usuari haurà d’introduir tots aquests números i el programa haurà de mostrar:
        La mitjana dels valors,
        El nombre de valors positius,
        El nombre de valors negatius,
        I el nombre de valors parells.
    A continuació, el programa demanarà una frase i mostrarà:
        Quants caràcters té,
        Quantes majúscules hi apareixen,
        I la mateixa frase però amb totes les vocals substituïdes per ‘*’.
    Finalment el programa acaba amb el missatge:
    "Anàlisi completada."*/

#include <stdio.h>
#include <string.h>

int main(){
    int nums=0, n=0, nombr=0, mitja=0, suma=0, positius=0, nega=0, par=0, impar=0;
    char frase[128];
    printf("Hla quants numeros vols introduir? \n");
    scanf("%d", &nums);
    printf("Molt bé, allà anam, introdueix %d nombres: \n", nums);
    for(n=0; n<nums; n++){
        scanf("%d", &nombr);
        suma=suma+nombr;
        if(nombr>0){
         positius++;
        }
        else{
            nega++;
        }
        if (nombr%2==0)
        {
            par++;
        }else{
            impar++;
        }
    }
    mitja=suma/nums;
    printf("La mitja aritmetica és: %d \n", mitja);
    printf("Hi ha: %d parells \n", par);
    printf("Hi ha: %d senars \n", impar);
    printf("Hi ha: %d positius \n", positius);
    printf("Hi ha: %d negatius \n", nega);

    printf("--------------------------------------------------------- \n");
    printf("Digues una frase: \n");
    fgets(frase, sizeof(frase), stdin);
    printf("--------------------------------------------------------- \n");

}
