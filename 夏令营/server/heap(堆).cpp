#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Ĭ������£���ֵ����ڶ���λ��(����)
    priority_queue<int> q;
    for (int i  = 0; i <= 10; i++)
        q.push(i);
    while(!q.empty())
	{
        cout << q.top() << " ";
        q.pop();
    }
    cout<<endl;

    // greater<int>��ʾ��ֵС�����ȼ�Խ��
    priority_queue<int,vector<int>,greater<int> > Q;
    for (int i  = 0;i <= 10;i ++)
        Q.push(i);
    while (!Q.empty())
	{
        cout << Q.top() << " ";
        Q.pop();
    }
}
