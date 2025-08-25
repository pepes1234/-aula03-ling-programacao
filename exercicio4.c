#include <stdio.h>
//Matriz 3×3 - calcular soma da diagonal principal
int main()
{
   int matriz[3][3] = { { 1, 8, 9  },
                        {5, 3, 4 }, 
                        { 31, 2, 4} };
   int somadiagonal = 0;

   for(int i = 0; i < 3; i++)
   {
        for(int j = 0; j < 3; j++)
        {
            if(i == j)
            {
                somadiagonal += matriz[i][j];
            }
        }
   }
   printf("A soma da diagonal principal da matriz 3x3 e: %d", somadiagonal);
}
