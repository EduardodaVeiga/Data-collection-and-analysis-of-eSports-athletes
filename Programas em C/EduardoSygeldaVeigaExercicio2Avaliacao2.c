/*- Ler uma string. Copiar o valor decimal do código ASCII de cada elemento da string para um vetor e mostrar
o vetor. Ordenar o vetor e mostrar o vetor ordenado. Percorrer o vetor ordenado contando, sem repetição, os números pares e os
números ímpares e mostrar a soma total desses valores. Criar um vetor pares e um vetor impares e copiar, sem repetição, os elementos
pares e os ímpares do vetor ordenado para os vetores pares e impares, respectivamente, e mostrar os dois vetores. Criar duas matrizes:
mPares e mImpares, sendo que mPares deverá conter na primeira coluna todos os elementos pares do vetor principal e na segunda
Data: 21/10/2020
Horário: 12:30 às 15:30
coluna a ocorrência de cada elemento par no vetor principal e a mImpares deverá conter na primeira coluna todos os elementos ímpares
do vetor principal e na segunda coluna a ocorrência de cada elemento ímpar no vetor principal. Mostrar as duas matrizes.*/


#include<stdio.h>

int main(void)
{
    char texto[50];
    int vetor[50],x=0,y,i,j,aux,pares=0,impar=0,vetorpar[50],vetorimpar[50],k=0,z,contimpar=0,contpar=0,c,cont=0,valor;

    printf("Informe uma string: ");
    fflush(stdin);
    gets(texto);
    while(texto[x]!='\0')
    {
        vetor[x]=texto[x];
        x++;
    }
    printf("\n\nVETOR:\n");
    for(y=0;y<x;y++)
    {
        printf("%d  ",vetor[y]);
    }
    for (i=0; i<x; i++)
    {
        for (j=0; j<x; j++)
        {
            if (vetor[i]<vetor[j])
            {
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    printf("\n\nVETOR ORDENADO:\n");
    for(y=0;y<x;y++)
    {
        printf("%d  ",vetor[y]);
    }
    for(y=0;y<x;y++)
    {
        if(vetor[y]!=vetor[y-1] || y==0)
        {
            if(vetor[y]%2==0)
            {
                pares++;
            }
            else impar++;
        }
    }
    printf("\n\nNumero de pares sem repeticao: %d",pares);
    printf("\n\nNumero de impares sem repeticao: %d",impar);
    for(y=0;y<x;y++)
    {
       if(vetor[y]%2==0)
       {
           for(z=0;z<k+1;z++)
           {
               if(vetor[y]==vetorpar[z])
               {
                   aux=0;
                   break;
               }
               else aux=1;
           }
           if(aux==1)
           {
               vetorpar[k]=vetor[y];
               k++;
               contpar++;
           }
       }
    }
    printf("\n\nVETOR PAR: \n");
    for(y=0;y<k;y++)
    {
        printf("%d  ",vetorpar[y]);
    }
    k=0;
    for(y=0;y<x;y++)
    {
       if(vetor[y]%2!=0)
       {
           for(z=0;z<k+1;z++)
           {
               if(vetor[y]==vetorimpar[z])
               {
                   aux=0;
                   break;
               }
               else aux=1;
           }
           if(aux==1)
           {
               vetorimpar[k]=vetor[y];
               k++;
               contimpar++;
           }
       }
    }
    printf("\n\nVETOR IMPAR: \n");
    for(y=0;y<k;y++)
    {
        printf("%d  ",vetorimpar[y]);
    }
    int mPares[contpar][2],mImpares[contimpar][2];
    printf("\n\n===MATRIZ DE PARES===\n");
    printf("PARES   OCORRENCIAS\n");
    c=0;
    z=0;
    for(y=0;y<contpar;y++)
    {
        mPares[y][z]=vetorpar[y];
    }
    z=1;
    for(i=0;i<contpar;i++)
    {
        valor=vetorpar[i];
        for(k=0;k<x;k++)
        {
            if(vetor[k]==valor)
            {
                cont++;
            }
        }
        mPares[i][z]=cont;
        cont=0;
    }
    for(y=0;y<contpar;y++)
    {
        for(z=0;z<2;z++)
        {
            printf("%d     ",mPares[y][z]);
        }
        printf("\n");
    }
    printf("\n\n===MATRIZ DE IMPARES===\n");
    printf("IMPARES   OCORRENCIAS\n");
    c=0;
    z=0;
    for(y=0;y<contimpar;y++)
    {
        mImpares[y][z]=vetorimpar[y];
    }
    z=1;
    for(i=0;i<contimpar;i++)
    {
        valor=vetorimpar[i];
        for(k=0;k<x;k++)
        {
            if(vetor[k]==valor)
            {
                cont++;
            }
        }
        mImpares[i][z]=cont;
        cont=0;
    }
    for(y=0;y<contimpar;y++)
    {
        for(z=0;z<2;z++)
        {
            printf("%3d     ",mImpares[y][z]);
        }
        printf("\n");
    }

    return 0;
}
