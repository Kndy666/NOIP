#include <iostream>
#include <cstdio>

using namespace std;

int ans = 1;

int reOut(string a)
{
  string tmp1 = a.substr(0, a.size() / 2);
  string tmp2(tmp1.rbegin(), tmp1.rend());

  if (tmp1 == tmp2)
  {
    ans++;
  }

  if (a.size() % 2 != 0)return ans;
  else return reOut(tmp1);
}

int main()
{
  string tmp;
  cin >> tmp;

  int res;
  res = reOut(tmp);

  cout << res << endl;

}
