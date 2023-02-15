#include <bits/stdc++.h>
#define MAX 1001

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<int> v;
    int dp[MAX];
    int result;

    cin >> n;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v.push_back(input);
        dp[i] = 1;
    }
        
    for(int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if(v[j] < v[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        } 
        result = max(result, dp[i]);
    }

    cout << result << "\n";

    return 0;
}