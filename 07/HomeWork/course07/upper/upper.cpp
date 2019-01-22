#include <iostream>
#include <cstdio>

using namespace std;

char upperChar(char word)
{
  if(word >= 'A' && word <= 'Z')
  {
    return word + 32;
  } 
  else if(word >= 'a' && word <= 'z')
  {
    return word - 32;
  }
  else 
  {
    return word;
  }
}

string upper(string text)
{
  for (int i = 0; i < text.size(); i++)
  {
    text[i] = upperChar(text[i]);
  }
  return text;
}

int main()
{
  freopen("upper.in", "r", stdin);
  freopen("upper.out", "w", stdout);
  
  string text;
  getline(cin, text);

  cout << upper(text) << endl;
  return 0;
} 

