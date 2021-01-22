/* O que faz o algoritmo a seguir:
declare vetA[30], vetB[30], i, j como inteiro
repetir i = 0, até i < 30, passo 1
leia vetA[i]
fim-repetir
repetir i = 0, até i < 30, passo 1
escreva vetA[i]
fim-repetir
j=0;
repetir i = 0, até i < 30, passo 1
se ( vetA[i] % 2 == 0 ) then
vetB[j] = vetA[i]
j = j + 1
fim-se
fim-repetir
repetir i = 0, até i < j, passo 1
escreva vetB[j]
fim-repetir
Implemente uma solução na linguagem C para esse algoritmo. */

#include <stdio.h>

int main(void)
{
    char resposta;
    int veta[30],vetb[30],i,j;

    do
    {
        for(i=0;i<30;i++)
        {
            printf("VALOR %d: ",i+1);
            scanf("%d", &veta[i]);
        }
        printf("\n===VETOR A===\n");
        for(i=0;i<30;i++)
        {
            printf("%d\t",veta[i]);
            if(i%10==0 && i!=0)
            {
                printf("\n");
            }
        }
        j=0;
        for(i=0;i<30;i++)
        {
            if(veta[i]%2==0)
            {
                vetb[j]=veta[i];
                j++;
            }
        }
        printf("\n===VETOR B===\n");
        for(i=0;i<j;i++)
        {
            printf("%d\t",vetb[i]);
            if(i%10==0 && i!=0)
            {
                printf("\n");
            }
        }
        printf("\nDeseja repetir o prigrama(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
