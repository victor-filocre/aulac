#include <stdio.h>

int main ()
{
    int i;

    printf ("Insira um numero de 1 a 6\n");
    scanf ("%i",&i);

    switch (i)
    {
    case 1:
    printf("Primeiro\n");
            break;
        case 2:
    printf("Segundo\n");
            break;
        case 3:
    printf("Terceiro\n");
            break;
        case 4:
    printf("Quarto\n");
            break;
        case 5:
    printf("Quinto\n");
        break;
        case 6:
    printf("Sexto\n");
            break;    
    default:
    printf("Nada\n");
        break;
    }

    return 0;

    
}