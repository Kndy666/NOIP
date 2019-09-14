#include <iostream>
#include <cstdio>
#include <cmath> 

using namespace std;

int _p1, _p2, loc = 0, p = 0;

void init(char ch)
{
	if (ch == 'W')_p1++;
	else if (ch == 'L')_p2++;	
} 

void check(int a)
{
	if (loc == a + p)
	{
		if(abs(_p1 - _p2) != 1 && abs(_p1 - _p2) != 0)
		{		 
			cout << _p1 << ':' << _p2 << endl; 
			_p1 = 0;
			_p2 = 0;
			loc = 0;
			p = 0;
		}
		else p++;	
	} 
} 

int main()
{
	//freopen("in.in", "r", stdin);
	int num = 0;
	char arr[62505];
	char sign;
	cin >> sign;
	arr[num] = sign; 
	
	while(sign != 'E')
	{
		num++;
		cin >> sign;
		arr[num] = sign;	
	} 
	
	for (int i = 0; i < num; i++)
	{
		loc++;
		init(arr[i]);
		check(11);
	}
	
	cout << _p1 << ':' << _p2 << endl << endl;
	loc = 0;
	_p1 = 0;
	_p2 = 0;
	p = 0;
	
	for (int i = 0; i < num; i++)
	{
		loc++;
		init(arr[i]);
		check(21);
	}
	
	cout << _p1 << ':' << _p2;
	return 0; 
} 
