/*Deseja-se publicar o número de a*certos de cada aluno em uma prova. A prova const**a de 10 questões,
cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados:
- O cartão gabarito;
- O número de alunos da turma;
- O cartão de respostas para cada aluno, contendo o seu número e suas respostas.*/

#include <stdio.h>

int main(void)
{
    char resposta,gabarito[10],respostas[10];
    int x,alunos,y,z,acertos;

    do
    {
        acertos=0;
        do
        {
            printf("Digite o numero de alunos: ");
            scanf("%d", &alunos);
            if(alunos<=0)
            {
                printf("Valor invalido\n");
            }
        }while(alunos<=0);
        printf("===GABARITO===\n");
        for(x=0;x<10;x++)
        {
            do
            {
                printf("Digite o gabarito da prova para a questao %d: ",x+1);
                fflush(stdin);
                scanf("%c", &gabarito[x]);
                if(!(gabarito[x]>='a' && gabarito[x]<='e') && !(gabarito[x]>='A' && gabarito[x]<='E'))
                {
                    printf("Caractere invalido\n");
                }
            }while(!(gabarito[x]>='a' && gabarito[x]<='e') && !(gabarito[x]>='A' && gabarito[x]<='E'));
        }
        printf("\n===RESPOSTAS DOS ALUNOS===\n");
        for(x=1;x<=alunos;x++)
        {
            for(y=0;y<10;y++)
            {
                do
                {
                    printf("\nDigite a resposta do aluno %d para a questao %d: ",x,y+1);
                    fflush(stdin);
                    scanf("%c", &respostas[y]);
                    if(!(respostas[y]>='a' && respostas[y]<='e') && !(respostas[y]>='A' && respostas[y]<='E'))
                    {
                        printf("Caractere invalido\n");
                    }
                }while(!(respostas[y]>='a' && respostas[y]<='e') && !(respostas[y]>='A' && respostas[y]<='E'));
            }
            for(z=0;z<10;z++)
            {
                if(gabarito[z]==respostas[z])
                {
                    acertos++;
                }
            }
            printf("O aluno %d fez %d ponto(s)",x,acertos);
            acertos=0;
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='s' || resposta=='s');

    return 0;
}
