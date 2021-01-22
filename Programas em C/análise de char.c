#include <stdio.h>

char main(void)
{
    char pessoa;

    printf("Informe um caractere: ");
    scanf("%c", &pessoa);

    if(pessoa=='J'||pessoa=='j'){
        printf("Pessoa juridica");
    }
    if(pessoa=='F'||pessoa=='f'){
        printf("Pessoa fisica");
    }
    if(pessoa!='F' && pessoa!= 'f' && pessoa!='J' && pessoa!='j'){
        printf("Caractere invalido");
    }

    return 0;
}
