#include <stdio.h>

int main(void)
{
float tempc;

printf("Informe a temperatura em C: ");
scanf("%f", &tempc);
printf("A temperatura em Fahrenheit: %.1f",(1.8*tempc)+32);

return 0;

}


