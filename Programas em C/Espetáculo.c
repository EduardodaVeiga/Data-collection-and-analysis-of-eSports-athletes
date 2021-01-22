#include <stdio.h>
#include<math.h>

int main (void)
{
float cing,cesp,cluc;

//Entrada de dados
printf("Informe o valor do ingresso: ");
scanf("%f", &cing);
printf("Informe o custo do espet%cculo: ",160);
scanf("%f", &cesp);

//Processamento de dados
cluc=ceil(cesp/cing);

//Saida de dados
printf("Para cobrir o custo do espet%cculo %c necess%crio vender %.0f ingressos \n",160,130,160,cluc);

//Processamento de dados
cluc=ceil((cesp/cing)+(0.25*(cesp/cing)));

//Saida de dados
printf("Para obter 25%% de lucro, deve-se vender %.0f ingressos \n",cluc);

return 0;

}
