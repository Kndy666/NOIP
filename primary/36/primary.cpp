#include <iostream>

using namespace std;

int main()
{
  int boys, girls;
  cin >> boys >> girls;

  if (boys + girls < 10)cout << "water" << endl;
  else if (boys + girls >= 10 && boys > girls)cout << "tree" << endl;
  else if (boys + girls >= 10 && boys <= girls)cout << "tea" << endl;

  return 0;

}
