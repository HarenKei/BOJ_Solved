#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int n;
bool dp[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //상근이를 true로 본다.
    //상근이가 돌이 1, 3, 4개인 경우는 무조건 승리한다.
    dp[1] = true; 
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;

    cin >> n;

    for(int i = 5; i <= n; i++){
        if(dp[i-1] && dp[i-3] && dp[i-4]) dp[i] = false;
        else dp[i] = true;
    }

    if(dp[n]) cout << "SK" << '\n';
    else cout << "CY" << '\n';

    return 0;
}