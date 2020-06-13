#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade:\n");
    scanf("%i", &idade);

    if (idade < 18) // se
    {
        printf("Bebidas nao liberadas\n");
    }
    else // se nao
    {
        printf("Bebidas liberadas\n");
    }

    return 0;
}