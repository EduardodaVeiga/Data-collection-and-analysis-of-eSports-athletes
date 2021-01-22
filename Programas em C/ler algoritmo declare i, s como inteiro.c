#include <Stdio.h>

int main(void)
{
    int i,s;
    s=0;

    for(i=0;i<10;i++)
    {
        s=s+i;
    }
    printf("Soma: %d\n",s);
    printf("A variavel s foi iniciada com 0 ,pois senao ela receberia um valor aleatorio localizado na memoria do sistema, nao resultando em um valor correto e consistente.");

    return 0;
}
