#include <bits/stdc++.h>

using namespace std;

int n;
int cnt[10001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        cnt[input]++;
    }

    for(int i = 1; i < 10001; i++){
        for(int j = 0; j < cnt[i]; j++){
            cout << i << '\n';
        }
    }

    return 0;
}