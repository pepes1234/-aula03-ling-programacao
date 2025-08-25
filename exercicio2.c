#include <stdio.h>
//Ler 5 números e mostrar apenas os números maiores que 10.

int main()
{
    int numeros[5];
    int numerosMaiores[5];
    int arraySize = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Escreva o numero %d:", i + 1);
        scanf("%d", &numeros[i]);
        if(numeros[i] > 10)
        {
            arraySize += 1;
            numerosMaiores[i] = numeros[i];
        }
    }
    
    printf("%d numeros sao maiores que 10:", arraySize);
    for(int i = 0; i < arraySize; i++)
    {
        printf("%d ", numerosMaiores[i]);
    }
}
