int numerofeliz(int n)
{
    int soma=0;


    if(n<10)
    {
        n=n*n;
    }
    do
    {
        soma=0;
        do
        {
            soma+=(n%10)*(n%10);
            n/=10;
        }while(n>0);
        n=soma;
    }while(n!=1 && n!=89);

    if(n==1)
    {
        return(1);
    }
    else return(0);


}
