#include <stdio.h>

int main(void)
{
    char clientes, fome, alternativo, chuva, sexsab, reserva, bar;
    int espera;

    printf("Quantas pessoas estao no restaurante(n para nenhuma, a para algumas e c para cheio): ");
    scanf("%c", &clientes);

    if(clientes=='n')
    {
        printf("Nao se deve esperar");
    }
    else if(clientes=='a')
    {
        printf("Tempo de espera minimo");
    }
    else if(clientes=='c')
    {
        printf("Qual o tempo de espera estimada(em minutos): ");
        scanf("%d", &espera);

        if (espera>60)
        {
            printf("Tempo de espera muito alto, recomendamos que se dirija a outro estabelecimento para uma boa refeicao");
        }
        else if(espera>=0 && espera<=10)
        {
            printf("Tempo de espera minimo");
        }
        else if(espera>10 && espera<=30)
        {
            printf("Esta com fome (s para sim e n para nao): ");
            fflush(stdin);
            scanf("%c",&fome);

            if(fome == 'n')
            {
                printf("Certo, sentimos pelo impecilio");
            }
            else if(fome=='s')
            {
                printf("Ha um restaurante alternativo na redondeza(s para sim e n para nao): ");
                fflush(stdin);
                scanf("%c",&alternativo);

                if(alternativo=='n')
                {
                    printf("Certo, faremos o possivel para acelerar sua entrada");
                }
                else if(alternativo=='s')
                {
                    printf("Esta chovendo(s para sim e n para nao):");
                    fflush(stdin);
                    scanf("%c", &chuva);

                    if(chuva=='s')
                    {
                        printf("Que pena, faremos o possivel para acelerar sua entrada");
                    }
                    else if(chuva=='n')
                    {
                        printf("Sentimos muito, portanto recomendamos que va ao restaurante alternativo desta vez");
                    }
                }
            }
        }
        else if(espera>30 && espera<=60)
        {
            printf("Ha um restaurante alternativo na redondeza(s para sim e n para nao): ");
            fflush(stdin);
            scanf("%c",&alternativo);

            if (alternativo=='s')
            {
                printf("E sexta ou sabado(s para sim e n para nao): ");
                fflush(stdin);
                scanf("%c", &sexsab);

                if(sexsab=='s')
                {
                    printf("Sentimos muito, portanto recomendamos que va ao restaurante alternativo desta vez");
                }
                else if(sexsab=='n')
                {
                    printf("Que pena, faremos o possivel para acelerar sua entrada");
                }
            }
            else if(alternativo=='n')
            {
                printf("Foi feita uma reserva(s para sim e n para nao): ");
                fflush(stdin);
                scanf("%c", &reserva);

                if(reserva=='s')
                {
                    printf("Recomendamos que espere, pois sera atendido em breve");
                }
                else if(reserva=='n')
                {
                    printf("Existe um bar confortavel onde possa se esperar(s para sim e n para nao): ");
                    fflush(stdin);
                    scanf("%c", &bar);

                    if(bar=='n')
                    {
                        printf("Que pena, faremos o possivel para acelerar sua entrada");
                    }
                    else if(bar=='s')
                    {
                        printf("Recomendamos que espere no bar entao para se sentir mais a vontade");
                    }
                }
            }

        }
    }

    return 0;
}
