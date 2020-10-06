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


int *cross_product(int *a, int *e, int *u, int *p, int *r, int *w)
{
  static int c[9];
  c[0] = a[0]*p[0]+a[1]*r[0]+a[2]*w[0];
  c[1] = a[0]*p[1]+a[1]*r[1]+a[2]*w[1];
  c[2] = a[0]*p[2]+a[1]*r[2]+a[2]*w[2];

  c[3] = e[0]*p[0]+e[1]*r[0]+e[2]*w[0];
  c[4] = e[0]*p[1]+e[1]*r[1]+e[2]*w[1];
  c[5] = e[0]*p[2]+e[1]*r[2]+e[2]*w[2];

  c[6] = u[0]*p[0]+u[1]*r[0]+u[2]*w[0];
  c[7] = u[0]*p[1]+u[1]*r[1]+u[2]*w[1];
  c[8] = u[0]*p[2]+u[1]*r[2]+u[2]*w[2];


  return c;

}

int main()
{

int *n;
int a[3];
printf("Enter the elements in a first row of matrix 1:");
n=getarray(a);

int *l;
int e[3];
printf("Enter the elements in a second row of matrix 1:");
l=getarray(e);

int *m;
int u[3];
printf("Enter the elements in a third row of matrix 1:");
m=getarray(u);

int *t;
int p[3];
printf("Enter the elements in a first row of matrix 2:");
t=getarray(p);

int *k;
int r[3];
printf("Enter the elements in a second row of matrix 2:");
k=getarray(r);

int *v;
int w[3];
printf("Enter the elements in a third row of matrix 2:");
v=getarray(w);


int *j;
j=cross_product(a, e, u, p, r, w);

printf("\nElements of cross product matrix are:");
printf("\n%d, %d, %d", j[0], j[1], j[2]);
printf("\n%d, %d, %d", j[3], j[4], j[5]);
printf("\n%d, %d, %d", j[6], j[7], j[8]);


  return 0;

}
