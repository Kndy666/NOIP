#include <iostream>
#include <cstdio>

using namespace std;

char upperChar(char ch)
{
  return ch - 32;
}

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  string str, str2;
  getline(cin, str);
  bool tmp = true;
  for (int i = 0; i < str.size(); i++)
  {
    if (tmp)
    {
      str2 += upperChar(str[i]);
    }
    else
    {
      str2 += str[i];
    }

    
    if (str[i] == ' ')
    {
      tmp = true;
    }
    else
    {
      tmp = false;
    }
  }

  cout << str2 << endl;
  return 0;
}
