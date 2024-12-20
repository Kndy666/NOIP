#include <iostream>

using namespace std;

int c, year, ans = 0;
int day[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
	int n, m;
    cin >> n >> m;
    for (int i = 1; i <= 12; i++) 
        for (int j = 1; j <= day[i]; j++)
        {
            c = (j % 10) * 1000 +
              (j / 10) * 100 +
              (i % 10) * 10 +
              (i / 10);
            year = c * 10000 + i * 100 + j;
            if (year < n || year > m) continue;
            ans++; 
        }
    cout << ans << endl;
    return 0;
}
