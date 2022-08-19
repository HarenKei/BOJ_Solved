#include <bits/stdc++.h>
#define MAX 1000000 + 1

using namespace std;

int n;
int result;
long long dp[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    if(n > 0){
        result = 1;
    }else if(n < 0){
        if(abs(n) % 2 == 0) result = -1;
        else result = 1;
    }
    else result = 0;

    dp[0] = 0;
    dp[1] = 1;

    n = abs(n);

    for(int i = 2; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 1000000000;
    }

    cout << result << '\n' << dp[n];

    return 0;
}