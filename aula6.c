#include <stdio.h>

int main ()
{
    int minhaIdade;                         // variavel de valor inteiro (-2 -1 0 1 2 ..)
    minhaIdade = 21;                        // valor da variavel
    int maeIdade = 61;
    int paiIdade = 71;
    int irmaoIdade = 15;
    int idadeTotal;

    idadeTotal = minhaIdade * maeIdade / paiIdade + irmaoIdade; 	        // operacao da variavel idadeTotal onde e somado todas as variaveis anteriores.

    printf ("%i\n",idadeTotal);

    return 0;
}