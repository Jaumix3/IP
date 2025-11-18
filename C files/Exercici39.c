/*Anem a modificar el programa del nombre ocult. 
Copia’l. Volem afegir un màxim d’intents. 
Això és, li donarem com a molt 6 possibilitats. 
Haurem de declarar aquesta variable i incrementar-la 
cada vegada que no encertem. 
El programa haurà d’acabar no només si encertem el nombre 
amagat sinó també perquè no tinguem més intents.
*/

 #include <stdio.h>

 int main(){
    int oculto=74;
    int num;
    int n=0;
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
            n++;
    }while(num!=oculto || n<6 );
 }