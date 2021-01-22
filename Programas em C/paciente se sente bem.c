#include <stdio.h>

int main(void)
{
    char paciente, dor;
    int temperatura;


    printf("Informe se o paciente se sente bem (s para sim e n para nao): ");
    scanf("%c", &paciente);
    if(paciente=='s' || paciente=='S')
    {
        printf("Saudavel");
    }
    else if(paciente=='n' || paciente=='N')
    {
        printf("Paciente sente dor: ");
        scanf("%c",&dor);
        if(dor=='s')
        {
            printf("Doente");
        }
        else if(dor=='n' || dor=='N')
        {
            printf("Informe a temperatura do paciente: ");
            scanf("%d", &temperatura);
            if(temperatura<=37)
            {
                printf("Saudavel");
            }
            else printf("Doente");
        }

    }

    return 0;
}
