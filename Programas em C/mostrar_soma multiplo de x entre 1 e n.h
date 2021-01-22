void mostrarmultiplo(int mult, int limsup)
{
    int x;
    for(x=1;x<=limsup;x++)
    {
        if(x%mult==0)
        {
            printf("%d  ",x);
        }
    }
}

int mostrarsomamultiplo(int mult, int limsup)
{
    int x,soma=0;
    for(x=1;x<=limsup;x++)
    {
        if(x%mult==0)
        {
            soma=soma+x;
        }
    }
    return (soma);
}
