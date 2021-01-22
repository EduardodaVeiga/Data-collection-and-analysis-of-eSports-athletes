int fatorial(int num)
{
    int x;
    long long int res=1;
    for(x=num;x>1;x--)
    {
        res=res*x;
    }
    return(res);
}

void mostrarfat(int num)
{
    int x;
    printf("%d! ==>",num);
    for(x=num; x>1; x--)
    {
        printf(" %d x",x);
    }
    printf(" 1 =");
}
