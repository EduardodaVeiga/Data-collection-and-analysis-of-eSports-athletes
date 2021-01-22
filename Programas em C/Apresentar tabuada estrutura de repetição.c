#include <Stdio.h>

int main(void)
{
    int x,y;

    printf("Informe um numero: ");
    scanf("%d", &x);
    do
    {
        printf("%2d * %2d = %2d\n",x,y,x*y);
        y++;
    }while(y<=10);


    return 0;
}
