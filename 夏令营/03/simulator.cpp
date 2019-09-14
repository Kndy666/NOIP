#include <iostream>
#include <stack> 

using namespace std;

int main()
{
	stack<double> V;
	stack<double> C;
	double v0, c0;
	int n;
	cin >> v0 >> c0 >> n;
	V.push(v0);
	C.push(c0);
	
	
	for (int i = 0; i < n; i++)
	{
		char ch;
		cin >> ch;
		if (ch == 'P')
		{
			double v, c, tmp_V, tmp_C;
			cin >> v >> c;
			tmp_V = V.top();
			tmp_C = C.top();
			V.push(v + tmp_V);
			
			C.push(((tmp_C / 100 * tmp_V + c / 100 * v) / (v + tmp_V)) * 100);
						
		}
		else
		{ 
			if (V.size() > 1)
			{
				V.pop();
				C.pop(); 
			} 
		}
		cout << V.top() << ' ';
		V.pop();
		printf("%.5f", C.top());
		C.pop();
		cout << endl;
	}
	
	return 0;
}
