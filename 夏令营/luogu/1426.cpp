#include <iostream>

using namespace std;

int main()
{
	double s, x;
	cin >> s >> x;
	
	double swim = 7, len = 0, cc = 0;
	
	while(1)
	{
		len += swim;
		swim *= 0.98;
		
		if (len >= s - x && len <= s + x)cc++;
		if (s - x <= 0)cc++;
		if (len > s + x)break; 
	}
	
	if (cc == 1)cout << 'n' << endl;
	else cout << 'y' << endl;
}
