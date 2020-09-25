/* Programa: Calificación según nota */

#include <conio.h>
#include <stdio.h>

int main()
{
    float nota;

    printf( "\n   Introduzca nota (real): " );
    scanf( "%f", &nota );

    if ( nota >= 5 )
    {
        printf( "\n   APROBADO" );
    }
    else
    {
        printf( "\n   SUSPENDIDO" );
    }

    getch(); /* Pausa */

    return 0;
}
