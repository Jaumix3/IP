// Demana a //l’usuari que li agrada més: 1 - Platja, 2- Muntanya, 3 - Ciutat.
// L’usuari ha de respondre 1, 2 o 3. llavors tu li has de dir: Així que t’agrada més ...

#include <stdio.h>

int main()
{
    int op1;
    printf("Quina opció t'agrada més?\n 1-Platja \n 2-Muntanya \n 3-Ciutat \n ");
    scanf("%d", &op1);

    switch (op1)
    {
    case 1:
        printf("T'agrada més la platja");
        break;
    case 2:
        printf("T'agrada més la muntanya");
        break;
    case 3:
        printf("T'agrada més la ciutat");
        break;
    default:
        printf("Ets ben burru, tria 1, 2 o 3. Gràcies");
        break;
    }
    return 0;
}