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
    }
        
    for(int i = 1; i <= n; i++){
        dp[i] = arr[i];
        for (int j = 1; j < i; j++){
            if(arr[j] < arr[i]){ //이전 수가 현재 수보다 작아야 부분수열 성립
                dp[i] = max(dp[i], dp[j]+ arr[i]);
            }
        }
        maxNum = max(dp[i], maxNum);
        
    }
        

    cout << maxNum << '\n';

    return 0;
}