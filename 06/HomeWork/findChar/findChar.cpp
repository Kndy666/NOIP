#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
  freopen("findChar.in", "r", stdin);
  freopen("findChar.out", "w", stdout);

  string str;
  char findChar;
  int times = 0;

  getline(cin, str);
  cin >> findChar;

  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == findChar)
    {
      times++;
    }
  }
  cout << times << endl;
  return 0;
}
