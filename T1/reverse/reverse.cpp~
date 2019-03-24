#include <iostream>
#include <cstdio>

using namespace std;

string reverse(string num)
{
  string temp;

  for (int i = num.size() - 1; i >= 0; i--)
  {
    temp += num[i]; 
  }
  num = temp;

  return num;
}

int main()
{
  freopen("reverse.in", "r", stdin);
  freopen("reverse.out", "w", stdout);

  string num;
  cin >> num;
  
  cout << reverse(num) << endl;
  return 0;
}
