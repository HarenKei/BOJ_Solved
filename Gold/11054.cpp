#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int arr[1001];
int dp[1001];
int rdp[1001];


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++) {
        dp[i] = 1;
        for(int j = 1; j <= i; j++) {
            if(arr[j] < arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    for(int i = n; i >= 1; i--) {
        rdp[i] = 1;
        for(int j = n; j >= i; j--) {
            if(arr[j] < arr[i]) {
                rdp[i] = max(rdp[i], rdp[j] + 1);
            }

        }
    }

   for(int i = 0; i <= n; i++) {
        ans = max(ans, dp[i] + rdp[i] - 1);
   }

   cout << ans << "\n";


 
    return 0;
}