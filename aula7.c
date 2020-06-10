#include <stdio.h>

int main ()
{
 int base;
 int altura;
 int area;

 printf ("Digite o valor da base: \n");
 scanf ("%i",&base);                            // funcao para inserir um valor a variavel a partir do usuario. (dentro de aspas o tipo de variavel)
 printf ("Digite o valor da altura: \n");
 scanf ("%i",&altura);    

 area = base*altura;

 printf ("O valor da area do quadrado: %i \n", area);



    return 0;
}