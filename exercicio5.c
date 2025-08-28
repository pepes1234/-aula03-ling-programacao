#include <stdio.h>
// matriz 2x3 - contar quantos elementos sao maiores que 5
int main()
{
   // inicializa matriz 2x3 com valores
   int matriz[2][3] = { 
    { 6, 8, 9  }, 
    {5, 3, 4 }
    };
   // variavel para contar elementos maiores que 5
   int contador = 0;

   // percorre matriz e conta elementos maiores que 5
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
   // exibe resultado
   printf("na matriz 2x3 tem %d numeros maiores que 5", contador);
}
