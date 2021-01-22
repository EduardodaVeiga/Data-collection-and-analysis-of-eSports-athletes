/*) Construa um programa que leia um conjunto de dados contendo altura (que deve ser
maior que 0) e sexo (que dever ser masculino ou feminino) de um grupo de pessoas. Quando fornecida uma altura igual a 0, é encerrada a entrada de dados. O programa deve
calcular e fornecer:
a) A maior e a menor altura do grupo. b) A média de altura das mulheres. c) A média de altura dos homens. d) O número de homens e o percentual que eles representam no grupo. e) O número de mulheres e o percentual que elas representam no grupo.
*/

#include <stdio.h>

int main(void)
{
    char resposta,genero;
    float altura,alturaant,maioraltura,menoraltura,somaalturah,somaalturam,alturaant2;
    int contmulher,conthomem,contotal;

    do
    {
        conthomem=0;
        contmulher=0;
        contotal=0;
        somaalturah=0;
        somaalturam=0;
        somaalturam=0;
        maioraltura=0;
        menoraltura=0;
        alturaant=0;
        alturaant2=10;
        do
        {
            do
            {
                printf("Informe a altura: ");
                scanf("%f", &altura);
                if(altura<0)
                {
                    printf("Valora invalido\n");
                }
            }
            while(altura<0);
            if(altura!=0)
            {
                do
                {
                    printf("Informe o genero(F/M): ");
                    fflush(stdin);
                    scanf("%c", &genero);
                    if(genero!='F' && genero!='f' && genero!='M' && genero!='m')
                    {
                        printf("Caracetere invalido\n");
                    }
                }
                while(genero!='F' && genero!='f' && genero!='M' && genero!='m');
                if(genero=='F' || genero=='f')
                {
                    somaalturam=somaalturam+altura;
                    contmulher++;
                }
                if(genero=='M' || genero=='m')
                {
                    somaalturah=somaalturah+altura;
                    conthomem++;
                }
                if(altura<alturaant2)
                {
                    menoraltura=altura;
                    alturaant2=altura;
                }
                if(altura>alturaant)
                {
                    maioraltura=altura;
                }
                else
                {
                    maioraltura=alturaant;
                }
                contotal++;
            }
        }while(altura!=0);
        printf("Menor altura do grupo: %.2f",menoraltura);
        printf("\nMaior altura do grupo: %.2f\n",maioraltura);
        printf("-------MULHERES-------\n");
        printf("Quantidade: %d\n",contmulher);
        if(contmulher>0)
        {
            printf("Media de altura:%.2f\n",somaalturam/contmulher);
            printf("Percentual:%.2f\n",(float)contmulher*100/contotal);
        }
        printf("-------HOMENS-------\n");
        printf("Quantidade: %d\n",conthomem);
        if(conthomem>0)
        {
            printf("Media de altura:%.2f\n",somaalturah/conthomem);
            printf("Percentual:%.2f",(float)conthomem*100/contotal);
        }


        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}
