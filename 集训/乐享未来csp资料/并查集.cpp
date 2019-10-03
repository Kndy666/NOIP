#include <iostream>

using namespace std;

int _father[101] = {0}, _num[101] = {0};

//��ʼ�����Լ����Լ����쵼 
void Init(int n)
{
	for (int i = 1; i <= n; i++)
	{
		_father[i] = i;
	}
}

//�� "����" ���ҵ������쵼 �ݹ� 
int GetF(int x) 
{
	if (_father[x] != x)
        _father[x] = GetF(_father[x]);  //·��ѹ�����Ż�����
    return _father[x];

} 

//�ϲ����ϣ� ���ͬһ���쵼 
void Merge(int x, int y)
{
    x = GetF(x);
    y = GetF(y);
    if(x != y)
        _father[y] = x;
}

//�ж��ǲ�����ͬһ������ 
bool Judge(int x, int y)
{
    x = GetF(x);
    y = GetF(y);
    if (x == y)
        return true;
    else 
        return false;
}

//ͳ�Ƽ��������м���СȺ�� 
int Count_Sets(int n)
{
    int cc = 0;
    for(int i = 1; i <= n; i++)
        if (_father[i] == i)
            cc++;
	return cc;
}

//ͳ�Ƽ����е�Ԫ�ظ����� 
void Count_Elements(int n)
{
    for (int i = 1; i <= n; i++)
	{
        _father[i] = GetF(i);   //Ѱ��ÿ���ڵ�ĸ��ڵ�
        _num[_father[i]]++;     //ͳ�Ƹ��ڵ��µĽڵ����
    }
    for(int i = 1; i <= n; i++) //ͳ�Ƹ��ڵ���ĵ�ĸ���
        num[i] = num[father[i]];
}

int main()
{
	int n;
	cin >> n;
	Init(n);
	...
	return 0;
} 
