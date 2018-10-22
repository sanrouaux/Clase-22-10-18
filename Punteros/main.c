#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}eDato;

eDato* funtion(int, char);


int main()
{
    /*
    eDato dato = {5,'c'};
    eDato* pDato;
    pDato = &dato;

    int x;
    x = (*pDato).a; //Accede al valor de la estructura a traves del puntero
    printf("%d", x);
    */

    /*
    eDato listaDatos[2] = {{1,'a'},{2,'b'}};
    eDato* pDato;
    pDato = listaDatos; //Sin &. Usarlo seria redundante

    int i;
    for(i=0; i<2; i++)
    {
        printf("%d - ", (*(pDato+i)).a); //Esta sintaxis nos permite aceder a los campos de una estructura utilizando el puntero al array de estructuras
        printf("%c\n", (*(pDato+i)).b);
    }
    */


    /*
    eDato dato = {5,'c'};
    eDato* pDato;
    pDato = &dato;

    int x;
    x = pDato->a; //El operador flecha me permite acceder a los campos de una estructura usando el puntero
    printf("%d \n", x);



    eDato listaDatos[2] = {{1,'a'},{2,'b'}};
    eDato* punteroDato;
    punteroDato = listaDatos;
    int i;
    for(i=0; i<2; i++)
    {
        printf("%d - ", (punteroDato+i)->a); //En un array de estructuras, debo obtener la direccion de memoria y, sobre eso, aplico el operador flecha
        printf("%c\n", (punteroDato+i)->b);
    }
    */


    int entero;
    entero = 7;
    char letra;
    letra = 'f';
    eDato* pDato;

    pDato = funtion(entero, letra);
    printf("%d -- %c\n", pDato->a, pDato->b);

    entero = 9;
    letra = 'e';
    eDato* pDato2;

    pDato2 = funtion(entero, letra);
    printf("%d -- %c", pDato2->a, pDato2->b);

    return 0;
}


/** \brief
 *
 * \param x int Recibe un entero
 * \return eDato*
 *
 */
eDato* funtion(int x, char y)
{
    eDato* pDato;
    eDato datito;
    pDato = &datito;

    pDato->a = x;
    pDato->b = y;

    return pDato;
}
