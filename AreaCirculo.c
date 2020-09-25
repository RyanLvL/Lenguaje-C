/* Programa: Perímetro de una circunferencia (Solución 1) */

#include <conio.h>
#include <stdio.h>

#define PI 3.141592

int main()
{
    float perimetro, radio;
	
    printf( "\n   Introduzca radio: " );
    scanf( "%f", &radio );

    perimetro = 2 * PI * radio;

    printf( "\n   El per%cmetro es: %f", 161, perimetro );

    getch(); /* Pausa */

    return 0;
}
