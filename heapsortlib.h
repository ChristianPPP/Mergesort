void HeapSort(int b[], int n);
void HeapSort(int b[], int n)
{
  int valor, temp, a;
  for(int i=n;i>0;i--)
  {
    for(int j=1;j<=i;j++)
    {
      valor=b[j];
      a=j/2;
      while(a>0 && b[a]<valor)
      {
        b[j]=b[a];
        j=a;
        a=a/2;
      }
      b[j]=valor;
    }
    temp=b[1];
    b[1]=b[i];
    b[i]=temp;
  }
}