#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int n;
int dp[MAX];
int su[MAX];
int maxVal;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> su[i];
    }

    dp[1] = su[1];
    maxVal = dp[1];

    for(int i = 2; i <= n; i++){
        dp[i] = max(su[i], dp[i-1] + su[i]);

        if(dp[i] > maxVal){
            maxVal = dp[i];
        }

    }

    cout << maxVal << '\n';

    return 0;


}