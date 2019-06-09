#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

struct pos
{
  int x;
  int y;
};

int main()
{
  freopen("in.in", "r", stdin);

  bool wall[55][55] = {false};
  char tmp;
  int h, w, ans = 0;
  pos ming;
  cin >> h >> w;

  for (int i = 1; i <= h; i++)
  {
    for (int j = 1; j <= w; j++)
    {
      cin >> tmp;
      if (tmp == '@')
      {
	ming.x = i;
	ming.y = j;
      }
      else if (tmp == '#')wall[i][j] = false;
      else wall[i][j] = true;
      
    }
  }

  while (wall[ming.x][ming.y + 1] ||
	 wall[ming.x][ming.y - 1] ||
	 wall[ming.x + 1][ming.y] ||
	 wall[ming.x - 1][ming.y]
	 )
  {
    if (wall[ming.x][ming.y - 1])ming.y--;wall[ming.x][ming.y + 1] = false;ans++;
    if (wall[ming.x][ming.y + 1])ming.y++;wall[ming.x][ming.y - 1] = false;ans++;
    if (wall[ming.x + 1][ming.y])ming.x++;wall[ming.x - 1][ming.y] = false;ans++;
    if (wall[ming.x - 1][ming.y])ming.x--;wall[ming.x + 1][ming.y] = false;ans++;
  }

  cout << ming.x << ming.y << ans << endl;
  return 0;
  

}
