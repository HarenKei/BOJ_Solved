#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    long long result = 0, curGas = 0;
    long long dis[100001]; //거리
    long long gas[100001]; //기름값

    cin >> n;

    for(int i = 1; i < n; i++){
        cin >> dis[i];
    }

    for(int i = 0; i < n; i++){
        cin >> gas[i];
    }

    //첫 번째 주유는 필수적.
    curGas = gas[0];

    for(int i = 0; i < n; i++){
        curGas = min(gas[i], curGas);
        result += curGas * dis[i + 1];
    }

    cout << result << "\n";


    return 0;
}