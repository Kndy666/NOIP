#include <iostream>

using namespace std;

struct pos
{
	int a, b, c, d, e, f, g, h, i, j;
}l[10005];

int main()
{
	int num, ans = 0;
	cin >> num;
	
	if (num < 30 || num > 10)
	{
		for (int a = 1; a <= 3; a++)
		{
			for (int b = 1; b <= 3; b++)
			{
				for (int c = 1; c <= 3; c++)
				{
					for (int d = 1; d <= 3; d++)
					{
						for (int e = 1; e <= 3; e++)
						{
							for (int f = 1; f <= 3; f++)
							{
								for (int g = 1; g <= 3; g++)
								{
									for (int h = 1; h <= 3; h++)
									{
										for (int i = 1; i <= 3; i++)
										{
											for (int j = 1; j <= 3; j++)
											{
												if (a + b + c + d + e + f + g + h + i + j == num)
												{
													l[ans].a = a;
													l[ans].b = b;
													l[ans].c = c;
													l[ans].d = d;
													l[ans].e = e;
													l[ans].f = f;
													l[ans].g = g;
													l[ans].h = h;
													l[ans].i = i; 
													l[ans].j = j;
													ans++;	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		} 
		cout << ans << endl;
		for (int i = 0; i < ans; i++)
			cout <<  l[i].a << ' ' << l[i].b << ' ' << l[i].c << ' '
			<< l[i].d << ' ' << l[i].e << ' ' << l[i].f << ' ' << l[i].g
			<< ' ' << l[i].h << ' ' << l[i].i << ' ' << l[i].j << endl;
	}
	else cout << 0 << endl;
}
