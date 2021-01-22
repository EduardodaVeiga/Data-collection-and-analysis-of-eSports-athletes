#include <stdio.h>

int main(void)
{
    float n1,n2,dif;

    printf("Informe um valor num%crico: ",130);
    scanf("%f", &n1);
    printf("Informe outro valor: ");
    scanf("%f", &n2);

    dif=n1-n2;
    if(dif<0){
        printf("A diferen%ca entre eles %c: %.2f",135,130,(dif*-1));
    }else{
        printf("A diferen%ca entre eles %c: %.2f",135,130,dif);
        }

        return 0;

}
