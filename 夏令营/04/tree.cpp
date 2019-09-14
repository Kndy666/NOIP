#include <iostream>
#include <cstdio>
 
#define cut 0
#define empty 1
#define plant 2

using namespace std;

int main()
{
	int l, n;
	int a, b;
	int flag[10005];
	int ans_1 = 0, ans_2 = 0;
    cin >> l >> n;
    fill(flag, flag + l + 1, empty);
	 
    for(int i = 0; i < n; i++)
    {
    	bool sign;
        cin >> sign >> a >> b;
        if(sign == 0)//¿³Ê÷
        {
            for(int j = a; j <= b; j++)
            {
                if(flag[j] == plant)ans_2++;
                flag[j] = cut;
            }
        }
        else
        {
            for(int j = a; j <= b; j++)
            {
                if(flag[j] == cut)flag[j] = plant;
            }
        }
    }
    for(int i = 0; i <= l; i++)
    {
        if(flag[i] == plant)ans_1++;
    }
    cout << ans_1 << endl << ans_2;
    return 0;
}
