#include<iostream>

using namespace std;

int main(){
    int n, a1 = 0, a2 = 0, a = 0, b = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a2;
        if(a2 > a1)
            a++;
        else{
            b = max(a, b); 
            a = 0; 
        }
        a1 = a2;
    }
    cout << b + 1;
    return 0;
}
