#include <iostream>

using namespace std;

int main()
{

  int num, res = 0;
  cin >> num;
  
  if (num < 0)
  {
  	num *= -1;
  	cout << '-'; 
  }
  while(num > 0)
  {
    res = res * 10 + num % 10;
    num /= 10;
    if (res % 10 != 0)cout << res % 10;
  }
  cout << endl;
}
