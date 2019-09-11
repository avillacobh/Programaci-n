#include <iostream>

double serie (int N, double x);

int main (void)
{
  double x =1;
  int N = 50;
  std::cout << serie (N, x) <<'\n'; 
  return 0;
  
}

double serie (int N, double x)
{
  if (N > 1)
    {
      return (-x)*serie(N-1, x)/N;
    }
  if (N =1) {
    return 1;
  }
  else
    {
      std::cout << "Error !!!!"<<'\n';
    }
}
