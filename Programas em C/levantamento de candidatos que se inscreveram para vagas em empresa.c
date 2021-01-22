#include <stdio.h>

int main(void)
{
    int idade=1,totalbras=0,totalest=0,menorest,pessoa=0,mediaidade=0,menoridadeest=0;
    char nacio='e',cursosup='s';


    while(idade!=0 && (nacio=='B' || nacio=='b' || nacio=='E' || nacio=='e') && (cursosup=='S' || cursosup=='s' || cursosup=='N' || cursosup=='n'))
    {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        if(idade!=0)
        {
            printf("Informe a nacionalidade(E para estrangeiro e B para brasileiro): ");
            scanf("%c", &nacio);
            fflush(stdin);
            if(nacio=='B' || nacio=='b')
            {
                totalbras++;
            }
            else if(nacio=='E' || nacio=='e')
            {
                totalest++;
            }
            printf("Informe se possui curso superior(S/N): ");
            scanf("%c",&cursosup);
            fflush(stdin);
            if((nacio=='b' || nacio=='B')&&(cursosup=='N' || cursosup=='n'))
            {
                pessoa++;
                mediaidade=mediaidade+idade;
            }
            else if((nacio=='E' || nacio=='e') && (cursosup=='S' || cursosup=='s'))
            {
                menoridadeest=idade;
                if(idade<menoridadeest)
                {
                    menoridadeest=idade;
                }

            }

        }
    }

    printf("Quantidade de brasileiros: %d\nQuantidade de estrangeiros: %d\nIdade media de brasileiros sem curso superior: %.1f\nMenor idade de estrangeiros sem curso superior: %d",totalbras,totalest,(float)mediaidade/(float)pessoa,menoridadeest);


    return 0;
}
