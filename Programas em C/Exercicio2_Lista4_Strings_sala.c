/* Elaborar um programa que aceita e valida uma senha com 6 d�gitos num�ricos, que deve ser armazenada
em uma string. O usu�rio tem tr�s tentativas para acertar a senha, se ultrapassar esse limite, ele deve ser
informado. O usu�rio tamb�m deve ser informado se ele acertou a senha em at� tr�s tentativas.
Dica: Considere que j� existe uma senha armazenada na string senhaArmazenada[7]="123456";*/

#include <stdio.h>

int main(void)
{
    char resposta,senhacerta[7]="123456",senha[7];
    int aux, tentativas, x;

    do
    {
        tentativas=1;
        x=0;
        while(tentativas<=3)
        {
            printf("Informe a senha: ");
            fflush(stdin);
            gets(senha);
            aux=0;
            while(senha[x]!='\0')
            {
                if(senha[x]==senhacerta[x])
                {
                    aux++;
                }
                x++;
            }
            if(aux==6)
            {
                printf("Senha valida!\n");
                break;
            }
            tentativas++;
        }
        if(aux!=6)
        {
            printf("Acesso negado!\n");
        }
        printf("Deseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s');

    return 0;
}
