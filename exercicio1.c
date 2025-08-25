#include <stdio.h>

int main()
{
    int numeros[4], media = 0;
    for(int i = 0; i < 4; i++)
    {
        printf("Escreva o numero %d:", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 4; i++)
    {
        media += numeros[i];
    }
    media /= 4;

    printf("A media dos 4 numeros e: %d", media);
}