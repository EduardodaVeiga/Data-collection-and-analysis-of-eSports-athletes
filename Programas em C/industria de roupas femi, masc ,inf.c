#include <stdio.h>

int main(void)
{
    int quantidade=1,total=0; //não precisa inicializar a quantidade neste caso, pois você irá solicitar ao usuário
    char categoria;
    float feminino=0, masculino=0, infantil=0;

    do
    {
        printf("Informe a quantidade: ");
        scanf("%d", &quantidade);

        if(quantidade>0) //esse if é necessário para sair quando digitar 0
        {

            do //O ideal aqui seria você forçar o usuário a digitar uma categoria válida usando uma estrutura de repetição
            {
                printf("Informe a categoria - Feminino(F), Masculino(M) ou Infantil(I): ");
                fflush(stdin); //essa função deve ser usada sempre antes da função scanf
                scanf("%c",&categoria);

                if(categoria != 'F' && categoria != 'f'&& categoria != 'M'&& categoria != 'm'&& categoria != 'I' && categoria != 'i')
                {
                    printf("Categoria invalida!\n");
                }
            }while(categoria != 'F' && categoria != 'f'&& categoria != 'M'&& categoria != 'm'&& categoria != 'I' && categoria != 'i');

            //Quando chegar neste ponto, a categoria já vai estar validada

            if(categoria=='f' || categoria=='F') //você tinha esquecido do operador ||(ou)
            {
                feminino=feminino+quantidade;
            }
            else if(categoria=='I' || categoria=='i') //você tinha esquecido do operador ||(ou)
            {
                infantil=infantil+quantidade;
            }
            else if(categoria=='M' || categoria=='m')
            {
                masculino=masculino+quantidade;
            }
            total=total+quantidade;
        }
    }while(quantidade>0);

    printf("Feminino: %.2f%%\n",feminino*100/total);
    printf("Masculino: %.2f%%\n",masculino*100/total);
    printf("Infantil: %.2f%%\n",infantil*100/total);

    return 0;
}
