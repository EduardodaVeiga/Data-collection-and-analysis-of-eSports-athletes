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
