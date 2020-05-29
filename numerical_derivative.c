#include <stdio.h>
#include <math.h>

double numerical_derivation1(double (*f)(double), double x)
{
    const double h = 1.0e-6; // or similar
    double x1 = x - h;
    double x2 = x + h;

    double y1 = f(x1);
    double y2 = f(x2);
    return (y2 - y1) / (x2 - x1);
}

double numerical_derivation2(double (*f)(double), double x)
{
    const double h = 1.0e-6; // or similar

    return (f(x+h)-f(x))/h;
}



// call it as follows:
int main(){


double derivative1 = numerical_derivation1(sin, 1.0);
double derivative2 = numerical_derivation2(sin, 1.0);

printf("%s\n", "This is numerical derivative from the slope:");
printf("%lf\n", derivative1); // should be around 1.0
printf("%s\n", "This is numerical derivative from the first order divided difference:");
printf("%lf\n", derivative2);
}
