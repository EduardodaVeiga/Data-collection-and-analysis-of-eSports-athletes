#include <stdio.h>

int main(void)
{
    int x ,n,y=1,numant=0,cont=0,pontos=0,repete=0;

    printf("Quantidade: ");
    scanf("%d", &x);
    do
    {
        printf("%d: ",y);
        scanf("%d", &n);
        if(n!=numant)
        {
            numant=n;
            cont=1;
        }
        else
        {
            cont++;
        }
        if(pontos<cont)
        {
            repete=numant;
            pontos=cont;
        }
        y++;
    }while(y<=x);
    printf("Pontuacao: %d pontos",pontos);
    printf("\nValor que se repete mais vezes em sequencia: %d",repete);

    return 0;
}
