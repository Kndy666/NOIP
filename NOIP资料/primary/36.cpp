#include <iostream>

using namespace std;

int main()
{
	int boy, girl;
	cin >> boy >> girl;
	string ans = "";
	if (boy + girl < 10) 
		ans = "water";
	else if(boy + girl >= 10 && boy > girl) 
	 	ans = "tree";
	else if(boy + girl >= 10 && boy <= girl) 
		ans = "tea";
	cout << ans << endl;
	return 0;	
} 
