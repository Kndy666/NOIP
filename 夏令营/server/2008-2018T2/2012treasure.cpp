#include <iostream>
#include <cstdio>

using namespace std;

long long n, m, room[10001][101], key[10001][101], stair[10001], pos, move, ans = 0, inRoom;

int main()
{
	freopen("treasure.in", "r", stdin);
	freopen("treasure.out", "w", stdout);
	
	cin >> n >> m;	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> room[i][j] >> key[i][j];
			stair[i] += room[i][j];
		}
	}	
	cin >> inRoom;
	
	for (int j = 1; j <= n; j++)
    {
        ans += key[j][inRoom]; 
        pos = 0;
        move = inRoom;
        key[j][move] = (key[j][move] - 1) % stair[j] + 1;  
        while (pos < key[j][move])
        {
            pos += room[j][inRoom];  
            if (pos == key[j][move]) 
				break;
			inRoom++;
            if (inRoom == m) inRoom = 0;
        }
    }	
	
	cout << ans % 20123 << endl;	 
	return 0;
} 
