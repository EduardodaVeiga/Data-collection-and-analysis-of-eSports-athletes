#include<stdio.h>

float main (void)
{
    //Declaração de variáveis
    int nm1, nm2, res;float resf;

    //Entrada de dados
    printf("Informe o primeiro numero: ");
    scanf("%d",&nm1);
    printf("Informe o primeiro numero: ");
    scanf("%d", &nm2);

    //Processamento de dados
    res=nm1+nm2;

    //Saída de dados
    printf("A soma eh: %d\n",res);

    //Processamento de dados
    res=nm1-nm2;

    //Saída de dados
    printf("A subtracao do primeiro pelo segundo numero eh: %d\n",res);

    //Processamento de dados
    res=nm1*nm2;

    //Saída de dados
    printf("A multiplicacao: %d\n",res);

    //Processamento de dados
    resf=(float)nm1/(float)nm2;

    //Saída de dados
    printf("A divisao do primeiro pelo segundo numero(sem resto): %.2f\n",resf);

    //Processamento de dados
    res=nm1/nm2;

    //Saída de dados
    printf("A divisao do primeiro pelo segundo numero: %d\n",res);

    //Processamento de dados
    res=(int)nm1%(int)nm2;

    //Saida de dados
    printf ("O resto da divisao: %d\n",res);


    return 0;

}
