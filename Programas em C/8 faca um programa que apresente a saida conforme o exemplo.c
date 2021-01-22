int main(void)
{
  int numero,elementosPorLinha=0,i,j;

  printf("Informe um valor positivo: ");
  scanf("%d",&numero);

  for ( i = 1; i <= numero; i++)
  {
    elementosPorLinha++;
    for ( j ; j <= elementosPorLinha; j++)
    {
      printf("%d\t",j);
     }
     j=j+1;
    printf("\n");
  }

  return 0;
}
