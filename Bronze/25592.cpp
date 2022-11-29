#include <bits/stdc++.h>

using namespace std;

int n, cnt;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    while(n >= cnt){
        n -= cnt;
        cnt++;
    }

    if(cnt % 2 != 0){
        cout << cnt - n << endl;
    } else{
        cout << 0 << endl;
    }

    return 0;
}