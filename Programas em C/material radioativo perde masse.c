#include <stdio.h>

int main(void)
{
    char resposta;
    int cont=0;
    float y=0, x;

    do
    {
        do //validação da entrada
        {
            printf("Informe o valor da massa inicial: ");
            //scanf("%f", &x); //não há necessidade desse scanf, pois já tem o scanf que está no if
            fflush(stdin);
            if(scanf("%f", &x)== 0)
            {
                printf("Tipo de dado invalido\n");
                x = -1;
            }
            else if(x<=0)
            {
                printf("Valor invalido\n");
            }
        }while(x<=0);

        while(x>=0.49)
        {
            x=x-(x/2);
            cont++;
        }
        printf("Foram necessarios %d minutos para a massa se reduzir a %.2f gramas",cont,x);
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');  //estava sem o operador lógico
}
