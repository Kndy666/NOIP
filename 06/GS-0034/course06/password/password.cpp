#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
  freopen("password.in", "r", stdin);
  freopen("password.out", "w", stdout);

  string password;
  getline(cin, password);
  
  for (int i = 0; i < password.size(); i++)
  {
    char ch = password[i];
    if (ch >= 'A' && ch <= 'C' || ch >= 'a' && ch <= 'c')
    {
      password[i] = password[i] + 23;
    }
    else
    {
      password[i] = password[i] - 3;
    }
  }

  string temp;
  for (int i = password.size() - 1; i >= 0; i--)
  {
    temp += password[i]; 
  }
  password = temp;

  for (int i = 0; i < password.size(); i++)
  {
    char ch = password[i];
    if(ch >= 'a' && ch <= 'z')
    {
      password[i] = ch - 32;
    }

    if(ch >= 'A' && ch <= 'Z')
    {
      password[i] = ch + 32;
    }
  }

  cout << password << endl;
  return 0;
}
