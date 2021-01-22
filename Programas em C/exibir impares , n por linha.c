 #include <stdio.h>

int main(void)
{


    int num,x=1;
    char resposta;
    int nLinha;
    int cont=0;
    do
    {

        do
        {
            num=0;
            cont=0;
            x=0;
            nLinha=0;
            printf("Quantos impares quer mostrar: ");
            scanf("%d", &num);
            printf("Quantos numeros por linha deseja mostrar: ");
            scanf("%d", &nLinha);
            if(num<0)
            {
                printf("O valor deve ser maior ou igual a 0, tente novamente.\n");
            }
        }
        while(num<0);

        do
        {
            if(x%2!=0)
            {
                printf("%d\t",x);
                cont++;
                if (cont % nLinha == 0)
                {
                    printf("\n");
                }

            }
            x++;
        }
        while(x<=(2*num));
        printf("\nDeseja repetir o programa (S/N): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='s' || resposta=='S');


    return 0;
}

