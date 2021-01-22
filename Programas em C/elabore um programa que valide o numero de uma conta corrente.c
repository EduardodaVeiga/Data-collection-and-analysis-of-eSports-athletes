#include <stdio.h>

int main(void)
{
    int num,inv,n11,n22,n33,n44,n1,n2,n3,n4,conta,somacontainv,total,verificador;

    do
    {
        printf("Informe o numero da conta: ");
        scanf("%d", &num);
        if(num<1000 || num>9999)
        {
            printf("Numero invalido, por favor tente novamente\n");
        }
    }
    while(num<1000 || num>9999);
    n1=num/1000;
    n2=num%1000/100;
    n3=num%1000%100/10;
    n4=num%10;
    conta=n1*100+n2*10+n3;
    inv=n3*100+n2*10+n1;
    somacontainv=(conta+inv);
    if(somacontainv<1000)
    {
        n11=somacontainv/100;
        n22=somacontainv%100/10;
        n33=somacontainv%10;
        total=n11*1+n22*2+n33*3;
        verificador=total%10;
    }
    else
    {
        n11=somacontainv/1000;
        n22=somacontainv%1000/100;
        n33=somacontainv%1000%100/10;
        n44=somacontainv%10;
        total=n11*0+n22*1+n33*2+n44*3;
        verificador=total%10;
    }
    if(verificador==n4)
    {
        printf("Conta validada com sucesso, digito verificador correto");
    }
    else printf("Falha na validacao da conta, digito verificador incorreto");

    return 0;


}
