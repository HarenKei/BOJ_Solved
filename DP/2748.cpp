#include <bits/stdc++.h>
#define MAX 91

using namespace std;

long long dp[MAX] = {0, 1, };

long long fibo(int x){
    if(x == 0 || x == 1)
        return dp[x];
    else if(dp[x] == 0)
        dp[x] = fibo(x-1) + fibo(x-2);
    
    return dp[x];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    cout << fibo(n);
}