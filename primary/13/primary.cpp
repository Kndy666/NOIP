#include <iostream>
#include <cstdio>

using namespace std;

int n, k;

int main(){
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  cin >> n;

  while(n){

    k = k * 10 + n % 10;
    n /= 10;

  }
  cout << k << endl;
  return 0;
}
