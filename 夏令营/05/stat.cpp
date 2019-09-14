#include <iostream>
#include <string>

using namespace std;

int main()
{
  string find;
  string sentance;
  getline(cin, find);
  getline(cin, sentance);

  for (int i = 0; i < sentance.size(); i++)
  {
    sentance[i] = tolower(sentance[i]);
  }

  for (int i = 0; i < find.size(); i++)
  {
    find[i] = tolower(find[i]);
  }

  int ans = 0, first;
  string tmp;

  for (int i = 0; i < sentance.size(); i++)
  {
    if (sentance[i] == ' ')
    {
      if (tmp == find)
      {
		if (!ans)first = i;
		ans++;
      }
      tmp = "";
    }
    else
    {
      tmp += sentance[i];
    }
  }

  if (!ans)cout << -1 << endl;
  else cout << ans << ' ' << first - find.size() << endl;
  return 0;
}

