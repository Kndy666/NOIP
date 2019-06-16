#include <iostream>

using namespace std;

char translate(char ch)
{
  if (ch >= 'a' && ch <= 'z')
    return 219 - ch;
  else
    return ch;

}
int main()
{
  string str;
  getline(cin, str);

  for (int i = 0; i < str.size(); i++)cout << translate(str[i]);

  cout << endl;
  return 0;


}
