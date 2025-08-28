#include <stdio.h>
// criar uma matriz 2x2, preencher e encontrar o maior elemento

int main()
{
   // inicializa matriz 2x2 com valores
   int matriz[2][2] = { 
    { 5, 8 }, {5, 4} 
    };
   // variavel para guardar o maior valor
   int comparador = matriz[0][0];

   // percorre matriz para encontrar o maior elemento
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
   // exibe o maior valor encontrado
   printf("o maior numero da matriz 2x2 e: %d", comparador);
}
