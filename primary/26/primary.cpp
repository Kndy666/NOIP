#include <iostream>

using namespace std;

int main()
{
  int num;
  bool flag = true;
  cin >> num;
  
  cout << num << '=';

  for (int i = 2; i <= num; i++)
  {
    while(num != i)
    {
      if(num % i == 0)
      {
	if (flag)
	  {
	    cout << i;
	    flag = false;
	  }
	else cout << '*' << i;
	num /= i;
      }
      else break;
    }
  }
  cout << '*' << num << endl;
  return 0;
}
