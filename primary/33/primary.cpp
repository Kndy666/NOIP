#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);

  int n, a[10005] = {0}, tmp, ans, max = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  { 
    cin >> tmp;
    a[tmp]++;
  }
  
  for (int i = 0; i < 10005; i++)
  {
    if (a[i] > max)
    {
      ans = i;  //����Ͱ ���ÿ���ǰ��˳�� 
      max = a[i];
    }
  }

  cout << ans << endl;


}
