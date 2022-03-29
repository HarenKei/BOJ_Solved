#include <bits/stdc++.h>

using namespace std;

int fibo(int n){
    return (n >= 2) ? fibo(n - 1) + fibo(n -2) : n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;

    cout << fibo(num) << endl;

    return 0;
}