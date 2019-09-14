#include <iostream>
#include <cmath>

using namespace std;

int getNum(int num)
{
	int res = 0, i = 3, ans = 0;
	bool flag = false; 
	if (num < 0)
  	{
  		num *= -1;
  		flag = true; 
  	}
  	while(num > 0)
  	{
    	res = res * 10 + num % 10;
    	num /= 10;
    	if (res % 10 != 0) ans += res % 10 * pow(10, i);
    	i--;
  	}
  	if(flag)ans *= -1; 
  	return ans;
}

int main()
{

  	int num;
  	cin >> num;
  
  	cout << getNum(num) - num << endl;
  
   	return 0;
}
