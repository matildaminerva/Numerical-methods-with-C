#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#include <stdio.h>
int *getarray(int *a)
{

    for(int i=0;i<3;i++)
    {
        scanf("%d", &a[i]);
    }
    return a;
}

int *cross_product(int *a, int *b)
{
  static int c[3];
  c[0] = a[0]*b[0];
  c[1] = a[1]*b[1];
  c[2] = a[2]*b[2];

  return c;

}

int main()
{
  int *n;
  int a[3];
  printf("Enter the elements in an vector 1: ");
  n=getarray(a);

  int *m;
  int b[3];
  printf("Enter the elements in an vector 2: ");
  m=getarray(b);


  int *k;
  k=cross_product(a, b);

  printf("\nElements of cross product vector are:");
  for(int i=0;i<3;i++)
    {
        printf("\n%d", k[i]);
    }
    return 0;
}
