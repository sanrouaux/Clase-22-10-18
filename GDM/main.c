#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int* pEntero;
    pEntero = (int*)malloc(sizeof(int)); //Casteo el puntero para que sea
    if(pEntero != NULL)
    {
        *pEntero = 9;
        printf("%d", *pEntero);
    }
    */

    int* pEntero;
    pEntero = (int*)malloc(sizeof(int)*5); //Casteo el puntero para que sea
    if(pEntero != NULL)
    {
        int i;
        for(i=0; i<5; i++)
        {
            printf("Ingrese un valor: ");
            scanf("%d", pEntero+i);
        }

        for(i=0; i<5; i++)
        {
            printf("%d - ", *(pEntero+i));
        }
    }

    reall

    return 0;
}
