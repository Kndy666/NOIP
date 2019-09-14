#include <iostream>
#include <cstdio>

using namespace std;

char map[105][105];

int main()
{

  int n, m, num = 0;
  cin >> n >> m;

  string tmp;

  for (int i = 1; i <= n; i++)
  {
    cin >> tmp;
    for (int j = 1; j <= m; j++)
    {
      map[i][j] = tmp[j - 1];
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= m; j++)
    {
      if (map[i][j] == '?')
       {
	 if (map[i - 1][j - 1] == '*')num++;
	 if (map[i][j - 1] == '*')num++;
	 if (map[i + 1][j - 1] == '*')num++;
	 if (map[i - 1][j] == '*')num++;
	 if (map[i + 1][j] == '*')num++;
	 if (map[i - 1][j + 1] == '*')num++;
	 if (map[i][j + 1] == '*')num++;
	 if (map[i + 1][j + 1] == '*')num++;
	 cout << num;
	 num = 0;
       }
       else
       {
	 cout << '*';
       }
    }
    cout << endl;
  }
  return 0;
}
