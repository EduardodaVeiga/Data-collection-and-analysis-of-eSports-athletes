
/*) Ler dados de pessoas: idade, curso e se reside em Pato Branco (variável tipo char com
resposta s/S/n/N). Para o curso, a pessoa deverá informar a letra A para Agronomia e
letra Q para Química. Validar a entrada para se reside em Pato Branco (deve ser
informado um desses caracteres: s/S/n/N). a) Fazer a média de idade de alunos do curso de Agronomia. b) Contar quantos alunos residem em Pato Branco. c) Encontrar a menor idade entre os alunos que não residem em Pato Branco. d) Contar quantos alunos não cursam Agronomia. Parar a leitura (entrada de dados) quando informado 0 ou valor negativo para a idade.*/

#include <stdio.h>

int main(void)
{
    char resposta,curso,reside;
    int idade,antmenor,contnpato,contagronomia=0,contmorapato=0,contnaoagro=0,menor;
    float somaidade=0;

    do
    {
        antmenor=99999999;
        menor=0;
        somaidade=0;
        contagronomia=0;
        contmorapato=0;
        contnaoagro=0;
        contnpato=0;
        do
        {
            printf("Informe a idade: ");
            scanf("%d", &idade);
            if(idade>0)
            {

                do
                {
                    printf("Informe o curso(Q/A): ");
                    fflush(stdin);
                    scanf("%c", &curso);
                    if(curso!='Q' && curso!='A' && curso!= 'q' && curso!='a')
                    {
                        printf("Caractere invalido\n");
                    }
                }
                while(curso!='Q' && curso!='A' && curso!= 'q' && curso!='a');
                printf("Reside em Pato Branco(S/N): ");
                fflush(stdin);
                scanf("%c", &reside);
                if(reside!='S' && reside!='N' && reside!= 's' && reside!='n')
                {
                    printf("Caractere invalido\n");
                }
            while(reside!='S' && reside!='N' && reside!= 's' && reside!='n');
            if(curso=='A' || curso=='a')
            {
                somaidade=somaidade+idade;
                contagronomia++;
            }
            if(curso=='Q' || curso=='q')
            {
                contnaoagro++;
            }
            if(reside=='N' || reside=='n')
            {
                contnpato++;
            }
            if(reside=='S' || reside=='s')
            {
                contmorapato++;
            }
            if(reside=='N' || reside=='n')
            {
                if(idade<antmenor)
                {
                    menor=idade;
                    antmenor=idade;
                }
            }
            }
        }
        while(idade>0);
        if(contagronomia>0)
        {
            printf("Media de idade dos alunos que cursam agronomia: %.2f\n",somaidade/contagronomia);
        }
        printf("Quantidade de alunos que residem em Pato Branco: %d\n",contmorapato);
        if(contnpato>0)
        {
            printf("Menor idade entre os alunos que nao residem em Pato Branco: %d\n",menor);
        }
        printf("Quantidade de alunos que nao cursam agronomia: %d\n",contnaoagro);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }
    while(resposta=='S' || resposta=='s');

    return 0;
}
