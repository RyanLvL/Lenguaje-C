/* Programa: Clasificaci�n seg�n estatura */

#include <conio.h>
#include <stdio.h>

int main() 
{
	float estatura;
	
    printf( "\n   Introduzca estatura (real	): " );
    scanf( "%f", &estatura );

    if ( estatura >= 1.60 )
    {
        printf( "\n   ALTO" );
    }
    else
    {
        printf( "\n   PEQUE�O" );
    }

    getch(); /* Pausa */

    return 0;
}
