#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

double pi_monte_carlo (double sample_amount){
  double inside = 0;

  srand((long) time(NULL));

  for(int i=0;i<sample_amount;i++){

    double x = rand()/32767.0 ;

    double y = rand()/32767.0 ;

    if((x*x + y*y) <= 1){
      ++inside;
    }
  }

  double pi = 4*(inside/sample_amount);

  return pi;
}

int main(){

printf("%f\n",pi_monte_carlo(100000.0));

}
