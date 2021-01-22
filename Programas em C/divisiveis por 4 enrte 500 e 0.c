#include <stdio.h>

int main(void)
{
    int x=500,contador=0;
    float media=0;

    do
    {
      if(x%4==0 || x%10==0)
      {
          printf("x = %d\n",x);
          media=media+x;
          contador++;

      }
      x--;
    }while(x>=0);

    printf("Media: %.2f",media/contador);

    return 0;
}
