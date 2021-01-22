#include <stdio.h>

float main(void)
{
    float n1,n2,n3,nf,nr,nf2;



    printf("Informe sua primeira nota: ");
    scanf("%f", &n1);
    printf("Informe sua segunda nota: ");
    scanf("%f", &n2);
    printf("Informe sua terceira nota: ");
    scanf("%f", &n3);

    nf=(n1*1+n2*3+n3*4)/8;

    if(nf>=6){
        printf("Voce foi aprovado");
    }
    if(nf<4){
        ("Voce foi reprovado");
    }
    if(nf>=4 && nf<=5.9){

        printf("Voce esta em recuperacao, por favor informe sua nota na prova de recuperacao: ");
        scanf("%f", &nr);
        nf2=(nf+nr)/2;
        if(nf2<5){
           printf("Voce foi reprovado apos recuperacao");
    }else printf("Voce foi aprovado apos recuperacao");

     }



}
