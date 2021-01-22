#include <stdio.h>

int main(void)
{
    int idade=1, contbras=0,  contestr=0, contBSCS=0, somaBSCS=0, primeiro=0, menor;
    char nac, sup;
    float mediaBSCS;

    while(idade>0 && idade<=120)
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade>0 && idade<=120)
        {
            do
            {
                printf("\nInforme a nacionalidade (B/b e E/e): ");
                fflush(stdin);
                scanf("%c", &nac);

                if(nac!= 'B' && nac!= 'b' && nac!= 'E' && nac!= 'e')
                {
                    printf("\nNacionalidade invalida");
                }
            }while(nac!='B' && nac!='b' && nac!='E' && nac!='e');

            do
            {
                printf("\nTem curso superior (S/s ou N/n)? ");
                fflush(stdin);
                scanf("%c", sup);

                if(sup!='s' && sup!='S' && sup!='n' && sup!='N')
                {
                    printf("\nCaractere invalido\n.");
                }

            }while(sup!='s' && sup!='S' && sup!='n' && sup!='N');

            if(nac == 'B' && nac == 'b')
            {
                contbras++;

                if(sup == 'n' && sup == 'N')
                {
                    contBSCS++;
                    somaBSCS=somaBSCS+idade;
                }
            }
else
            {
                contestr++;

                if(sup =='s' || sup == 'S')
                {
                    if(primeiro=0)
                    {
                        menor = idade;
                        primeiro = 1;
                    }
                    else
                    {
                        if(idade < menor)
                        {
                            menor = idade;
                        }
                    }
                }
            }

        }
    }

    printf("\nQuantidade de brasileiros: %d", contbras);
    printf("Quantidade de estrangeiros: %d", contestr);

    if(contBSCS>0)
    {
    mediaBSCS = (float)somaBSCS / contBSCS;
    printf("Media de idade de brasileiros sem curso superior: %.2f\n", mediaBSCS);
    }
    else
    {
        printf("Nao existe nenhum brasileiro sem curso superior.");
    }

    printf("Menor idade de estrangeiro com curso superior: %d\n", menor);

    return 0;
}
