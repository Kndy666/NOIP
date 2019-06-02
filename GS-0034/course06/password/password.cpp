#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
  freopen("password.in", "r", stdin);
  freopen("password.out", "w", stdout);

  string password;
  string step1;
  getline(cin, password);
  
  for (int i = 0; i < password.size(); i++)
  {
    char ch = password[i];
    if (ch >= 'A' && ch <= 'C' || ch >= 'a' && ch <= 'c')
    {
      step1[i] = password[i] + 23;
      //cout << step1[i] << endl;
    }
    else
    {
      step1[i] = password[i] - 3;
      //cout << step1[i] << endl;
    }
  }
  /*
  char tmp;
  string step2;
  for (int i = step1.size() - 1; i >= 0; i--)
  {
    cout << step1[i] << endl;
  }
  /*
  for (int i = 0; i < step1.size(); i++)
  {
    cout << step1[i] << endl;
  }
  
  */
  
  for (int i = 0; i < step1.size(); i++)
  {
    char ch = step1[i];
    if(ch >= 'a' && ch <= 'z')
    {
      step1[i] = ch - 32;
    }

    if(ch >= 'A' && ch <= 'Z')
    {
      step1[i] = ch + 32;
    }
  }

  cout << step1 << endl;
  return 0;
}
