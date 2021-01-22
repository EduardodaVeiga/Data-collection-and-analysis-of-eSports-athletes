#include <stdio.h>

int main(void)
{
    int x,y,limitesup=0,limiteinf=0,num;

    do
    {
        printf("Os valores informados a seguir devem ser diferentes\n");
        printf("Informe um valor para o limite inferior: ");
        scanf("%d", &limiteinf);
        printf("Informe um valor para o limite superior: ");
        scanf("%d", &limitesup);
    }
    while(limitesup==limiteinf);

    printf("Informe um valor para x: ");
    scanf("%d", &x);
    printf("Informe um valor para y: ");
    scanf("%d", &y);
    if(limiteinf<limitesup)
    {
        num=limiteinf;
        do
        {
            if(num%x==0 && num%y!=0)
            {
                printf("%d\t",num);
            }
            num++;
        }
        while(num<=limitesup);
    }
    else if(limiteinf>limitesup)
    {
        num=limitesup;
        do
        {
            if(num%x==0 && num%y!=0)
            {
                printf("%d\t",num);
            }
            num++;
        }
        while(num<=limiteinf);
    }

    return 0;
}
