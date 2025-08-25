#include <stdio.h>
//Criar uma matriz 2×2, preenchê-la e encontrar o maior elemento.
int main()
{
   int matriz[2][2] = { { 5, 8 }, {5, 4} };
   int comparador = matriz[0][0];

   for(int i = 0; i < 2; i++)
   {
        for(int j = 0; j < 2; j++)
        {
            if(comparador < matriz[i][j])
            {
                comparador = matriz[i][j];
            }
        }
   }
   printf("O maior numero da matriz 2x2 e: %d", comparador);
}
