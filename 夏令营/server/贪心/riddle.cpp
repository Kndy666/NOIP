/*
	贪心算法经典应用--带限期和罚款的单位时间任务调度
*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Game
{      
    int time;
	int money; 
};

bool Cmp(Game a, Game b)  
{
    return a.money > b.money;
} 

int main()
{
	int n, m, sum = 0;
	Game list[505];
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
    	cin >> list[i].time;
	}
	
	for (int i = 0; i < n; i++)
    {
    	cin >> list[i].money;
	}
 
    sort(list, list + n, Cmp);
    for (int i = 0; i < n; i++)
    {
        if (list[i].time > 0)    
        { 
            for (int j = i + 1; j < n; j++)
            {
            	if (list[i].time <= list[j].time)
            	{
            		list[j].time--;
				}       				
			}
        }
        else 
		{
			sum += list[i].money;	
		}  
    }
    cout << m - sum << endl;
    return 0;
 }
