#include <stdio.h>
//Matriz 3×3 - calcular soma da diagonal principal
int main()
{
   int matriz[2][3] = { { 6, 8, 9  }, {5, 3, 4 }};
   int contador = 0;

   for(int i = 0; i < 2; i++)
   {
        for(int j = 0; j < 3; j++)
        {
            if(matriz[i][j] > 5)
            {
                contador++;
            }
        }
   }
   printf("Na matriz 2x3 tem %d numeros maiores que 5", contador);
}
