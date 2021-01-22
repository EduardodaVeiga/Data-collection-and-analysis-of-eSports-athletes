#include <stdio.h>
#include <math.h>

int main(void)
{
    float dist, tanq, cons;

    printf("Informe a distancia percorrida entre as cidades (em km): ");
    scanf("%f", &dist);
    printf("Informe a capacidade maxima do tanque de combustivel do veiculo: ");
    scanf("%f", &tanq);
    printf("Informe o consumo medio (em km por litro) do veiculo: ");
    scanf("%f", &cons);

    printf("Foram necessarios %.1f litros de combustivel para percorrer o trajeto.\n",dist/cons);
    printf("Foi necessario abastecer o veiculo %.0f vezes.\n",ceil((dist/cons)/tanq));
    printf("Restou no tanque de combustivel %.1f litros.",((tanq*(ceil((dist/cons)/tanq)))-dist/cons));

    return 0;

}


