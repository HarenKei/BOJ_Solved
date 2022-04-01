#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    vector<int> vCoin;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int nCoin;
        cin >> nCoin;
        vCoin.push_back(nCoin);
    }
    
    int cnt = 0;
    for(int i = n-1  ; i >= 0; i--){
        cnt += (k / vCoin[i]);
        k = k % vCoin[i];
    }

    cout << cnt << endl;
}