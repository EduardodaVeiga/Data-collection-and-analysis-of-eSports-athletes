#include <stdio.h>

int main(void)
{
    float sal;
    int opcao;

    printf("Informe o valor do salario: ");
    scanf("%f", &sal);
    printf("Menu de opcoes:\n1-Imposto\n2-Novo salario\n3-Classificacao\nDigite a opcao desejada:");
    scanf("%d", &opcao);

    if(opcao==1)
    {
        if(sal<1000)
        {
            printf("Valor do imposto sobre o salario: R$%.2f",sal*0.05);
        }
        else if(sal>=1000 && sal<=1500)
        {
            printf("Valor do imposto sobre o salario: R$%.2f",sal*0.1);
        }
        else if(sal>1500)
        {
            printf("Valor do imposto sobre o salario: R$%.2f",sal*0.15);
        }
    }
    else if(opcao==2)
    {
        if(sal<1000)
        {
            printf("Valor do aumento do salario R$75,00 e o novo salario e R$%.2f",sal+75);
        }
        else if(sal>1000 && sal<=1500)
        {
            printf("Valor do aumento do salario R$100,00 e o novo salario e R$%.2f",sal+100);
        }
        else if(sal>1500)
        {
            printf("Valor do aumento do salario R$150,00 e o novo salario e R$%.2f",sal+150);
        }
    }
    else if(opcao==3)
    {
        if(sal<1000)
        {
            printf("Categoria B");
        }
        else printf("Categoria A");
    }
    else if(opcao!=1 && opcao!=2 && opcao!=3)
    {
        printf("Opcao invalida");
    }

    return 0;
}
