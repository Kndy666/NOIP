#include <iostream>

using namespace std;

string tmp[100000];

void chifen(int num)
{
    string ans;
    int pos = 0, i = 0;
    while (num)
    { 
        if (num & 1)
        {
	  ans += "2(";
	  ans += pos + '0';
	  ans += ")+";
          tmp[i] = ans;
	  ans = "";
	  i++;
        }
	pos++;
        num >>= 1;
  }
    for (; i >= 0; i--)cout << tmp[i];
    cout << endl;
}

int main()
{
    int num;
    cin >> num;
    
    chifen(num);
    return 0;
}
