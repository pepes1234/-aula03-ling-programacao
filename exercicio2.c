#include <stdio.h>
// ler 5 numeros e mostrar apenas os numeros maiores que 10

int main()
{
    // declara vetores para armazenar os numeros e os maiores que 10
    int numeros[5];
    int numerosMaiores[5];
    int arraySize = 0;

    // leitura dos 5 numeros
    for(int i = 0; i < 5; i++)
    {
        printf("escreva o numero %d:", i + 1);
        scanf("%d", &numeros[i]);
        // verifica se o numero e maior que 10
        if(numeros[i] > 10)
        {
            numerosMaiores[arraySize] = numeros[i]; // corrige o indice
            arraySize += 1;
        }
    }
    
    // exibe quantidade e os numeros maiores que 10
    printf("%d numeros sao maiores que 10:", arraySize);
    for(int i = 0; i < arraySize; i++)
    {
        printf("%d ", numerosMaiores[i]);
    }
}
