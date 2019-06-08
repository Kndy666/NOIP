#include <iostream>

using namespace std;

int main()
{
  
  for(char i = 'x'; i <= 'z'; i++)
  {
    for(char j = 'x'; j <= 'z'; j++)
    {
      if(i != j)
      {
        for(char k = 'x';k <= 'z'; k++)
	{
	  if(i != k && j != k)	
	  {
	    if(i != 'x' && k != 'x' && k != 'z')
	    {
	      cout << "a--" << i << endl;
	      cout << "b--" << j << endl;
	      cout << "c--" << k << endl;
	    }
	  }	
	}	
      }
    }
  }

    return 0;
}
