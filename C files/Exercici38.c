/*Crea una variable de nom ocult. Dona-li un valor entre 1 i 
100. Llavors demana un nombre a l’usuari. Si és més gran que 
el teu digues-li: “ més petit”. Si és més petit  digues-li 
“més gran”. En els dos casos torna a demanar un nombre. 
Si l’encerta li has de dir “enhorabona” i ja no cal 
tornar-li a demanar cap nombre.
 */

 #include <stdio.h>

 int main(){
    int oculto=74;
    int num;
    do{
        printf("Digues un nombre de l1 al 100. \n");
        scanf("%d",&num);
        if(num<oculto){
            printf("El nombre és més gran que %d \n",num);
        }
        if(num>oculto){
            printf("El nombre és més petit que %d \n",num);
        }
        if (num==oculto)
        {
            printf("Enorabona L'has encertat\n");
        }   
    }while(num!=oculto);
 }