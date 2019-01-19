#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("calculate.in", "r", stdin);
  freopen("calculate.out", "w", stdout);

  char otr;
  int a, b;
  cin >> a >> b; 
  cin >> otr;

  switch(otr)
  {
    case '+':
      cout << a << " + " << b << " = " << a + b << endl;
      break;
    case '-':
      cout << a << " - " << b << " = " << a - b << endl;
      break;
    case '*':
      cout << a << " * " << b << " = " << a * b << endl;
      break;
    case '/':
      if(b == 0)
      {
	cout << "Diveded by zero!" << endl;
	break;
      }
      cout << a << " / " << b << " = " << a / b << endl;
      break;
    default:
      cout << "Invalid operator!" << endl;
  }

  return 0;
}
