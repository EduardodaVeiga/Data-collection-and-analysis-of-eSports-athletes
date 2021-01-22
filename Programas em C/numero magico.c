#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int magico,nm;

    printf("Adivinhe o numero magico: ");
    scanf("%d",&nm);

    srand(time(NULL));
    magico=rand()%11;

    if(nm>magico)
    {
        printf("Muito alto!");
    }
    else if(nm<magico)
    {
        printf("Muito baixo!");
    }
    else printf("Certo %d e o numero magico",nm);

    return 0;

}
