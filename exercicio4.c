#include <stdio.h>
// matriz 3x3 - calcular soma da diagonal principal
int main()
{
   // inicializa matriz 3x3 com valores
   int matriz[3][3] = { 
    { 1, 8, 9  },
    {5, 3, 4 }, 
    { 31, 2, 4} 
    };
   // variavel para soma da diagonal
   int somadiagonal = 0;

   // percorre matriz e soma elementos da diagonal principal
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
   // exibe resultado
   printf("a soma da diagonal principal da matriz 3x3 e: %d", somadiagonal);
}
