#include <iostream>

using namespace std;

int main()
{
  int a, b, c;
  cout << "Press 1.2.3.4 to choose mode. Press it with the third arg." << endl;
  cin >> a >> b >> c;
    if(c == 1)
    {
      cout << "a + b =";
      cout << a + b << endl;
    }else if(c == 2)
    {
      cout << "a - b =";
      cout << a - b << endl;
    }else if(c == 3)
    {
      cout << "a * b =";
      cout << a * b << endl;
    }else if(c == 4)
    {
      cout << "a / b = ";
      cout << a / b << endl;
    }

  return 0;
}
