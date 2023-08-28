#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int n, maxNum;
int arr[MAX];
int dp[MAX];
vector<int> ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        dp[i] = 1; //가장 짧은 LIS의 길이는 1
    }

    for(int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            if(arr[j] < arr[i]){ //이전 수가 현재 수보다 작아야 부분수열 성립
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        maxNum = max(maxNum, dp[i]);
    }

    cout << maxNum << "\n";

    for(int i = n; i >= 1; i--) {
        if(dp[i] == maxNum) {
            ans.push_back(arr[i]);
            maxNum--;
        }
    }

    for(auto it = ans.end() - 1; it != ans.begin() - 1; it--) {
        cout << *it << " ";
    }

    return 0;
}
