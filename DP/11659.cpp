#include <bits/stdc++.h>
#define MAX 100001

using namespace std;

int n, m;
int nArr[MAX];
int dp[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
        cin >> nArr[i];
        dp[i] = dp[i - 1] + nArr[i];

    }
    
    for(int j = 1; j <= m; j++){
        int a, b;
        cin >> a >> b;

        cout << dp[b] - dp[a - 1] << '\n';
    }

    return 0;


}