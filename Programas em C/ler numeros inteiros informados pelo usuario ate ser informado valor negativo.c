#include <Stdio.h>

int main(void)
{
    int num,cont10e100=0,contimpar=0,contdiv10=0,contentre10e100=0,cont30=0,cont102030=0;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &num);
        if(num>=0)
        {
            if(num<10 || num>100)
            {
                cont10e100++;
            }
            else if(num%2!=0)
            {
                contimpar++;
            }
            else if(num%10==0)
            {
                contdiv10++;
            }
            else if(num>=10 && num<=100)
            {
                contentre10e100++;
            }
            else if(num==30)
            {
                cont30++;
            }
            else if(num!=10 && num!=20 && num!=30)
            {
                cont102030++;
            }
        }
    }while(num>=0);

    printf("Menores que 10 e maiores que 100: %d\n",cont10e100);
    printf("Impares: %d\n",contimpar);
    printf("Divisiveis por 10: %d\n",contdiv10);
    printf("Entre 10 e 100: %d\n",contentre10e100);
    printf("Iguais a 30: %d\n",cont30);
    printf("Diferentes de 10 20 e 30: %d\n",cont102030);

    return 0;


}
