/*) Ler a idade, o tipo (E = Estudante e P = Professor) de cinco pessoas. Se o tipo for P, solicitar o salário e fazer a média dos salários informados. Se o tipo for E, solicitar se o
mesmo recebe mesada. Contar quantos recebem e quantos não recebem mesada. Garantir que o usuário informe uma idade válida, ou seja, maior que 0, que o tipo seja E
ou P e que recebe mesada seja S ou N. Validar essas entradas, ou seja, solicitar essas
entradas até que sejam válidas. Validar para que não seja realizada uma divisão por zero.*/

#include <stdio.h>

int main(void)
{
    char resposta,tipo,mesada;
    int idade,y=1,cont=0,contmes=0,contnaomes=0;
    float salario,somasal=0;

    do
    {
        do
        {
            do
            {
            printf("Informe a idade da pessoa %d: ",y);
            scanf("%d", &idade);
            if(idade<=0)
            {
                printf("Valor invalido\n");
            }
            }while(idade<=0);
            do
            {
            printf("Informe o tipo da pessoa(E estudante ou P professor: ");
            fflush(stdin);
            scanf("%c", &tipo);
            if(tipo!='P' && tipo!='E' && tipo!= 'p' && tipo!='e')
            {
                printf("Caractere invalido\n");
            }
            }while(tipo!='P' && tipo!='E' && tipo!= 'p' && tipo!='e');
            if(tipo=='P' || tipo=='p')
            {
                printf("Informe o salario: ");
            scanf("%f", &salario);
            somasal=somasal+salario;
            cont++;
        }
        if(tipo=='E' || tipo=='e')
        {
            printf("Recebe mesada(s/n): ");
            fflush(stdin);
            scanf("%c", &mesada);
            if(mesada=='S' || mesada=='s')
            {
                contmes++;
            }
            else if(mesada=='N' || mesada=='n')
            {
                contnaomes++;
            }
        }
        y++;
        }while(y<=5);
        if(cont>0)
        {
            printf("Media salarial dos professores: %.2f\n",somasal/cont);
        }
        else
        {
            printf("Nao ha professores na listagem\n");
        }
        printf("Numero de estudantes que recebem mesada: %d\n",contmes);
        printf("Numero de estudantes que nao recebem mesada: %d\n",contnaomes);
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
        somasal=0;
        cont=0;
        contmes=0;
        contnaomes=0;
    }while(resposta=='S' || resposta=='s');

    return 0;
}
