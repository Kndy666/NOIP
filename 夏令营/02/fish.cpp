#include <iostream>

using namespace std;

int main()
{
    int n, a[105], cc = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (a[j] < a[i])cc++;
        }
        cout << cc << ' ';
        cc = 0;
    }
}
