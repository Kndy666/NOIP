#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("title.in", "r", stdin);
  freopen("title.out", "w", stdout);

  string title;

  getline(cin, title);

  int count = 0;
  for (int i = 0; i < title.size(); i++)
  {
    if (title[i] != ' ')
    {
      count++;
    }
  }
  
  cout << count << endl;

  return 0;
}
