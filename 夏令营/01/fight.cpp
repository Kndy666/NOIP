#include <iostream>

using namespace std;

int main()
{	
	int m, n;
    long long a = 0, b = 0;
    long long c, p1, p2, s1, s2;

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> c;
        a += c;
        b += c * i;
    }

    cin >> m >> p1 >> s1 >> s2;

    a += s1;
    b += p1 * s1;

    a += s2;

    b -= a * m;
    p2 = -(b - s2 / 2) / s2;

    if(p2 < 1){
        p2 = 1;
    } else if (p2 > n){
        p2 = n;
    }

    cout << p2;

    return 0;
} 
