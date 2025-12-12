/*Fes un programa que et demani una paraula. Llavors et demani una lletra. Si la lletra està a la paraula, et digui que hi es i a quina posició. 
Si no hi està et digui que no hi és. Ha de recorrer la paraula i quan la troba dir que l’ha trobat. Lo més difícil é dir que no l’ha trobat. 
El sistema és emprant una variable que farem servir com una bandera. Declararem una variable hi_es i la posarem =0. Recorrerem tota la cadena i 
si trobem la lletra farem que la variable hi_es = 1. D’aquesta manera si en acabat de recorre 
tota la cadena hi_es encara val 0 és que la lletra no hi és dins la cadena. Mirarem en acabat el for hi_es == 0 per decidir.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char paraula[128];
    char lletra;
    int n;
    printf("Digues una paraula: \n");
    fgets(paraula, sizeof(paraula), stdin);
    printf("Digues una lletra: \n");
    scanf("%c", lletra);
    for(){
        
    } 
}