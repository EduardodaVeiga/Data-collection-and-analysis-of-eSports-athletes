#include <stdio.h>

int main(void)
{
    int n;
    printf("Informe um valor inteiro: ");
    scanf("%d", &n);
    if(n>=0){
        printf("O m%cdulo do valor %c: %d",162,130,n);
    }else{
         printf("O m%cdulo do valor %c: %d",162,130,(-1*n));
    }

    return 0;

}
