void menu(void)
{
    printf("1-Quantidade de divisores de um numero\n2-Divisores de um numero\n3-Divisores, quantidade e soma de um intervalo\n4-Maximo divisor comum de dois numeros\nOpcao: ");
}

int quantdivisores(int num)
{
    int y,cont=0;
    for(y=1;y<=num;y++)
    {
        if(num%y==0)
        {
            cont++;
        }
    }
    return(cont);
}

void mostrardivisores(int num)
{
    int x;
    for(x=1;x<=num;x++)
    {
        if(num%x==0)
        {
            printf("%d ",x);
        }
    }
}

int somadivisores(int num)
{
    int x,soma=0;
    for(x=1;x<=num;x++)
    {
        if(num%x==0)
        {
            soma=soma+x;
        }
    }
    return (soma);
}

int mdc(int n1,int n2)
{
    int resto;

    do
    {
        resto = n1%n2;
        n1 = n2;
        n2 = resto;

    }while (resto!=0);

    return (n1);
}
