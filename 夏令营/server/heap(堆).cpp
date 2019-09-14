#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 默认情况下，数值大的在队首位置(降序)
    priority_queue<int> q;
    for (int i  = 0; i <= 10; i++)
        q.push(i);
    while(!q.empty())
	{
        cout << q.top() << " ";
        q.pop();
    }
    cout<<endl;

    // greater<int>表示数值小的优先级越大
    priority_queue<int,vector<int>,greater<int> > Q;
    for (int i  = 0;i <= 10;i ++)
        Q.push(i);
    while (!Q.empty())
	{
        cout << Q.top() << " ";
        Q.pop();
    }
}
