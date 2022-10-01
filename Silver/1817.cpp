#include <bits/stdc++.h>

using namespace std;

int n, m, ans, tmpSum;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int weight;
        cin >> weight;
        tmpSum += weight;

        if(tmpSum > m){
            ans++;
            tmpSum = weight;
        }
    }

    if(tmpSum != 0){
        ans++;
    }


    cout << ans << '\n';

    return 0;
}