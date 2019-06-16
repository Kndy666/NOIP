#include <iostream>

using namespace std;

int main()
{
	char a, b, c;
	for (a = 'x'; a <= 'z'; a++)
	{
		for (b = 'x'; b <= 'z'; b++)
		{
			if (a != b)
			{
				for (c = 'x'; c <= 'z'; c++)
				{
					if (a != c && b != c)
					{
						if (a != 'x' && c != 'x' && c != 'z')
						{
							cout << "a--" << a << endl;
							cout << "b--" << b << endl;
							cout << "c--" << c << endl;
						}							
					}	
				}	
			}	
		}	
	}	
}
