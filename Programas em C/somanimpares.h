char somanimpar(int n)
{
    int x,aux=0,soma=0;
    do
    {
        if(x%2!=0)
        {
            soma=soma+x;

        }
        if(soma==n)
        {
            aux=1;
        }
        x++;
    }while(soma<=n);
    if(aux==1)
    {
        return('s');
    }
    else
    {
        return('n');
    }
}
