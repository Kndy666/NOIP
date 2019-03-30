#include <iostream>
#include <cmath>

using namespace std;

struct wQ
{
  double x,
  double y
};

double distance(int rssi, double A, double n)
{
  double tmp;
  tmp = abs(rssi) - A;
  tmp /= 10 * n;
  
  tmp = pow(10, tmp);
  
  return tmp;
}

wQ site(double a, double b, double c, double x1, double y1, double x2, double y2)
{
  wQ tmp;

  tmp.x = b * cos

}
int main()
{
  
}
