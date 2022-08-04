#include <bits/stdc++.h>
#define MAX 11

using namespace std;

int t; //testCase
int dp[MAX] = {0, }; 


void initDP(){
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;

    for(int i = 5; i < MAX; i++){
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    initDP();

    cin >> t;

    while(t--){
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}