/*Escriu el programa que implementa una calculadora simple 
de quatre funcions. El programa mostra un menú amb quatre 
opcions (sumar restar, multiplicar o dividir). 
Després de triar una de les quatre, 
demanarà els dos nombres. 
Comprovarà en cas de ser una divisió que no es vol 
dividir per zero.
Llavors es representarà la operació amb el resultat.
Es torna a mostrar el menú. */

#include <stdio.h>

int main(){
    int num1, num2;
    int op;
    int n;
    int sum, rest, mult, div;
    while(op!=5){
        printf("Benvingut a la calculadora simple, esculli una opció: \n 1. Sumar \n 2. Restar \n 3. Multiplicar \n 4. Dividir \n 5. Sortit \n");
        scanf("%d", &op);
        switch (op){
            case 1:
                printf("Digues dos nombres: \n");
                scanf("%d",&num1);
                printf("Digues dos nombres: \n");
                scanf(" %d",&num2);
                sum=num1+num2;
                printf("El resultat de la suma és: %d", sum);
                break;
            case 2:
                printf("Digues dos nombres: \n");
                scanf("%d",&num1);
                printf("Digues dos nombres: \n");
                scanf("%d",&num2);
                rest=num1-num2;
                printf("El resultat de la resta és: %d", rest);
                break;
            case 3:
                printf("Digues dos nombres: \n");
                scanf("%d",&num1);
                printf("Digues dos nombres: \n");
                scanf("%d",&num2);
                mult=num1*num2;
                printf("El resultat de la Multiplicació és: %d", mult);
                break;
            case 4: 
                printf("Digues dos nombres: \n");
                scanf("%d",&num1);
                printf("Digues dos nombres: \n");
                scanf("%d",&num2);
                div=num1/num2;
                printf("El resultat de la divisió és: %d", div);
                break;
            case 5:
                break;
            }
        }
            
    }           