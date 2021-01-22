#include <stdio.h>

int main()
{
  int n1, n2, n;
    printf("Informe o primeiro valor: ");
    scanf("%d", &n1);
    printf("Informe o segundo valor: ");
    scanf("%d", &n2);
    if(n1==0 || n2==0){
        printf("Nao e possivel realizar uma divisao por 0");
    }

    if(n2>n1){
        n =n1 ;
        n1 = n2;
        n2 = n;
    }
    if (n1%n2==0)
        printf("Sao multiplos");
    else
        printf("Nao sao multiplos");
        return 0;



}





