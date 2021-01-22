void diamante(int n)
{
    int x,y,z;

    for(x=1;x<=n/2;x++)
    {
        for(y=1;y<=n-x;y++)
        {
            printf(" ");
        }
        for(z=1;z<=2*x-1;z++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(x=n/2+1;x>=1;x--)
    {
        for(y=n-x;y>=1;y--)
        {
            printf(" ");
        }
        for(z=2*x-1;z>=1;z--)
        {
            printf("*");
        }
        printf("\n");
    }
}
