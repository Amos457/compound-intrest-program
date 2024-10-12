#include <stdio.h>
#include <math.h>
int main(){
double principal=1000;
double rate=4;
double time=3;
double amount=principal*(("pow(1+rate/100)",time));
double CI=amount-principal;
printf("Compound interest is:%f%",CI);
  
  return 0;
  }