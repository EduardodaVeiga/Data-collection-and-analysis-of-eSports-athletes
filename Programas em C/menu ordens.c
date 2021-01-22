#include <stdio.h>

int main(void)
{
    int n1, n2, n3, opcao;

    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);
    printf("Informe o segundo valor: ");
    scanf("%d", &n2);
    printf("Informe o terceiro valor: ");
    scanf("%d", &n3);
    printf("Escolha uma opcao: \n1-Mostra os numeros em ordem crescente. \n2-Mostra os numeros em ordem decrescente. \n3-Mostra os numeros que sao multiplos de 2.\n");
    scanf("%d", &opcao);

    if(opcao==1)
    {
        if(n1<n2 && n2<n3 && n1<n3)
        {
            printf("ORDEM CRESCENTE:%d,%d,%d",n1,n2,n3);
        }
        else if(n1<n2 && n2>n3 && n1<n3)
        {
            printf("ORDEM CRESCENTE:%d,%d,%d", n1,n3,n2);
        }
        else if(n1>n2 && n2<n3 && n1>n3)
        {
            printf("ORDEM CRESCENTE:%d,%d,%d", n2,n3,n1);
        }
        else if(n1>n2 && n2<n3 && n1<n3)
        {
            printf("ORDEM CRESCENTE:%d,%d,%d", n2,n1,n3);
        }
        else if(n1>n2 && n2>n3 && n1>n3)
        {
            printf("ORDEM CRESCENTE:%d,%d,%d",n3,n2,n1);
        }
        else printf("ORDEM CRESCENTE:%d,%d,%d",n3,n1,n2);

    }
    if(opcao==2)
    {
        if(n1<n2 && n2<n3 && n1<n3)
        {
            printf("ORDEM DECRESCENTE:%d,%d,%d",n3,n2,n1);
        }
        else if(n1<n2 && n2>n3 && n1<n3)
        {
            printf("ORDEM DECRESCENTE:%d,%d,%d", n2,n3,n1);
        }
        else if(n1>n2 && n2<n3 && n1>n3)
        {
            printf("ORDEM DECRESCENTE:%d,%d,%d", n1,n3,n2);
        }
        else if(n1>n2 && n2<n3 && n1<n3)
        {
            printf("ORDEM DECRESCENTE:%d,%d,%d", n3,n1,n2);
        }
        else if(n1>n2 && n2>n3 && n1>n3)
        {
            printf("ORDEM DECRESCENTE:%d,%d,%d",n1,n2,n3);
        }
        else printf("ORDEM DECRESCENTE:%d,%d,%d",n2,n1,n3);


    }
    if(opcao==3)
    {
        if(n1%2==0 && n2%2==0 && n3%2==0)
        {
            printf("Os numeros %d,%d e %d sao multiplos de 2",n1,n2,n3);
        }
        else if(n1%2!=0 && n2%2==0 && n3%2==0)
        {
            printf("O numeros %d e %d sao multiplos de 2",n2,n3);
        }
        else if(n1%2==0 && n2%2!=0 && n3%2==0)
        {
            printf("Os numeros %d e %d sao multiplos de 2",n1,n3);
        }
        else if(n1%2==0 && n2%2==0 && n3%2!=0)
        {
            printf("Os numeros %d e %d sao multiplos de 2",n1,n2);
        }
        else if(n1%2==0 && n2%2!=0 && n3%2!=0)
        {
            printf("Apenas o numero %d e multiplo de 2",n1);
        }
        else if(n1%2!=0 && n2%2==0 && n3%2!=0)
        {
            printf("Apenas o numero %d e multiplo de 2",n2);
        }
        else if (n1%2!=0 && n1%2!=0 && n3%2==0)
        {
            printf("Apenas o numero %d e multiplo de 2",n3);
        }
        else if(n1%2!=0 && n2%2!=0 && n3%2!=0)
        {
            printf("Nenhum numero dentre os informados e multiplo de 2");
        }

    }
    else if(opcao!=1 && opcao!=2 && opcao!=3)
    {
         printf("Opcao invalida");
    }

    return 0;


}
