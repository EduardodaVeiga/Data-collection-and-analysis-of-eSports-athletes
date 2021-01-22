void mostrarquadrado(int n)
{
    int x;

    printf("%d ^ 2",n);
}

int quadrado(int n)
{
    return (n*n);
}
float centopoleg(float n)
{
    return ((float) n * 0.393701);
}
float converter(float n,float cotacao,char tipo)
{
    if(tipo=='D' || tipo=='d')
    {
        return(n/cotacao);
    }
    else
    {
        return(n*cotacao);
    }
}
void multiplicar(int n1, int n2)
{
    printf("%2d * %2d = %3d\n",n1,n2,n1*n2);
}
