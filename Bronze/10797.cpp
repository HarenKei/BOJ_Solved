#include <bits/stdc++.h>

using namespace std;

int n, ans;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < 5; i++){
        int carNum;
        cin >> carNum;
        if(carNum == n) ans++;
    }

    cout << ans << '\n';


    return 0;
}