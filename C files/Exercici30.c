//Feu un programa que escrigui la taula de multiplicar 
//d’un nombre introduït per teclat. 
//P. Ex.: 4 ‘x’ 1 ‘=’ 4  4 ‘x’ 2 ‘=’ 8 ... 


#include <stdio.h>

int main()
{
    int n;
    int num;
    printf("Digues un nombre del qual vulguis sebre la taula de muliplicar: \n");
    scanf("%d",&n);
    for(num=n; num<=n*10; num=num+n){
        printf("%d\n",num);
    }
        
}