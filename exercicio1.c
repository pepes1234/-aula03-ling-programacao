#include <stdio.h>

int main()
{
    // declara vetor para armazenar 4 numeros e variavel para media
    int numeros[4], media = 0;

    // leitura dos 4 numeros
    for(int i = 0; i < 4; i++)
    {
        printf("escreva o numero %d:", i + 1);
        scanf("%d", &numeros[i]);
    }

    // soma dos numeros
    for(int i = 0; i < 4; i++)
    {
        media += numeros[i];
    }
    // calcula a media
    media /= 4;

    // exibe a media
    printf("a media dos 4 numeros e: %d", media);
}