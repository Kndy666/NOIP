#include <iostream>

using namespace std;

int main()
{
    int l, m, cc = 0;
    bool a[10005] = {false};
    
    cin >> l >> m;
    
    for (int i = 0; i < m; i++)
    {
        int begin, end;
        cin >> begin >> end;
        
        for (int j = begin; j <= end; j++)
        {
            a[j] = true;
        }
    }
    
    for (int i = 0; i <= l; i++)
    {
        if (!a[i])cc++;
    }
    
    cout << cc << endl;
    
}
