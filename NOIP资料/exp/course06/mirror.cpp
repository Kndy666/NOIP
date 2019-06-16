#include <iostream>
#include <cstring>

using namespace std;

string  Mirror(string str)
{
  int len = str.size();
  if (len % 2 != 0)
  {
    return str;
  }
  else
  {
    string mStr(str.rbegin(),str.rend());
    if (str == mStr)
    {
      return Mirror(str.substr(0, len / 2));
    }
    else
    {
      return str;
    }
  }
}

int main()
{
  string str;
  getline(cin, str);
  cout << Mirror(str).size() << endl;
  return 0;
}
