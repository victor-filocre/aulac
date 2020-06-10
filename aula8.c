#include <stdio.h>

int main ()
{
    int inteira = 10;
    float decimal = 10.5;            // o compilador interpreta que o valor na variavel float pode ser decimal
    char letra = 'a';                 // o compilador interpreta que o valor na variavel char pode ser um caractere.

    printf ("%i\n", inteira);
    printf ("%f\n", decimal);           // %f para numeros decimais
    printf ("%c\n", letra);             // %c para cadeia de caracteres

    return 0;
}