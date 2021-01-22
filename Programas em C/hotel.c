#include <stdio.h>
#include<math.h>

float main(void)
{
    float vd,vdd;int apto;

    //Entrada de dados
    printf("Informe o valor da di%cria: ",160);
    scanf("%f", &vd);
    printf("Informe a quantidade de quartos disponiveis: ");
    scanf("%d", &apto);

    //Processamento de dados
    vdd=vd-(vd*0.25);

    //Saida de dados
    printf("O valor da di%cria com desconto %c:%.2fR$\n",160,130,vdd);

    //Processamento de dados
    vdd=(((vd-vd*0.25)*apto)*2);

    //Saida de dados
    printf("O valor total arrecadado casa haja 100%% de ocupa%cao ser%c: %.2fR$\n",135,160,vdd);

    //Processamento de dados
    vdd=(2*((vd-vd*0.25)*(apto-apto*0.30)));

    //Saida de dados
    printf("O valor total arrecadado caso haja 70%% de ocupa%cao ser%c: %.2fR$\n",135,160,vdd);

    //Processamento de dados
    vdd=(2*(apto*vd)-(2*((vd-vd*0.25)*apto)));

    //Saida de dados
    printf("O valor que deixar%c de arrecadar ao aplicar o desconto ser%c: %.2fR$\n",160,160,vdd);
}

