#include <stdio.h>

int main(void)
{
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if(idade>0){
        if (idade>0 && idade<5){
            printf("Nao categorizado como atleta");}
            else{
            if(idade>=5 && idade<=7){
                printf("Encaixa-se na categoria Infantil A");}
                else{
                    if(idade>7 && idade<=10){
                        printf("Encaixa-se na categoria Infantil B");}
                        else{
                            if(idade>10 && idade<=13 ){
                                printf("Encaixa-se na categoria Juvenil A");}
                                else{
                                    if(idade>13 && idade<=17){
                                        printf("Encaixa-se na categoria Juvenil B");}
                                        else{
                                            if(idade>17){
                                                printf("Encaixa-se na categoria Senior");}
                                            }
                                         }
                                       }
                                    }
                                }


}    else{printf("Valor invalido");}

    return 0;
}
