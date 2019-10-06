#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (a % b == 0)return b;
	else gcd(b, a % b);
}

int main()
{
	for (int count = 0;; count++)
	{
		string str1, str2;
		cin >> str1;
		if (str1 == "-1")break;
		cin >> str2;
		if(str1.size() > str2.size())swap(str1, str2);
		
		int ans = 0;
		for (int i = 0; i < str2.size(); i++)
		{
			int res = 0;
			string tmp = str2.substr(i, str2.size());
			
			//cout << tmp << endl;
					
			for (int j = 0; j < str1.size(); j++)
			{
				if (str1[j] == tmp[j])res++;
			}
			
			if (res > ans)ans = res;
		}
		int plus = str1.size() + str2.size();
		ans *= 2;
		
		if (!ans)cout << "appx(" << str1 << "," << str2 << ")=0" << endl; 
		else cout << "appx(" << str1 << "," << str2 << ")=" << ans / gcd(ans, plus) << "/" << plus / gcd(ans, plus) << endl;
	}
	
	/*for (int i = 0; i < count; i++)
	{
		cout << str[i][0] << ' ' << str[i][1] << endl; 
	}*/
 } 
