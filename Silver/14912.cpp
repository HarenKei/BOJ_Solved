#include <bits/stdc++.h>

using namespace std;

int n, d, cnt;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> d;

    for(int i = 1; i <= n; i++){
        string tmp = to_string(i);

        for(int j = 0; j < tmp.length(); j++){
            if(tmp[j] == d + '0'){
                cnt++;
            }
        }

    }

    cout << cnt << '\n';

    return 0;

}