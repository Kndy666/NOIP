#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  double a, dTax = 0.0;

  cin >> a;

  if(a - 3500 <= 1500)
    dTax=(a - 3500)*0.03-0.0;   
  else if(a - 3500<=4500)
    dTax=(a - 3500)*0.10-105.0; 
  else if(a - 3500<=9000)
    dTax=(a - 3500)*0.20-555.0;  
  else if(a - 3500<=35000)
    dTax=(a - 3500)*0.25-1005.0; 
  else if(a - 3500<=55000) 
    dTax=(a - 3500)*0.30-2755.0;  
  else if(a - 3500<=80000)
    dTax=(a - 3500)*0.35-5505.0;  
  else 
    dTax=(a - 3500)*0.45-13505.0; 

  printf("%.2f", dTax);
  return 0;

}
