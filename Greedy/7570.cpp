#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

int n;
int result;
int dp[MAX] = {1,};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        int input;
        cin >> input;
        dp[input] = dp[input - 1] + 1;
        result = max(result,dp[input]);
    }

    cout << n - result << '\n';

    return 0;
}