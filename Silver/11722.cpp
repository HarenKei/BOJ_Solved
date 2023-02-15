#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int n;
int arr[MAX];
int dp[MAX];
int maxNum;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        dp[i] = 1;
    }
        
    for(int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            if(arr[j] > arr[i]){ 
                dp[i] = max(dp[i], dp[j] + 1);
            }
        } 
        maxNum = max(maxNum, dp[i]);
    }

    cout << maxNum;

    return 0;
}