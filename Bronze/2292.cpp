#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int cnt = 1;

    if(n == 1){
        cout << 1 << "\n";
        return 0;
    }else{
        for(int i = 1; i <= n; i++){
            if(n <= cnt){
                cout << i << "\n";
                return 0;
            } else {
                cnt += i * 6;
            }
        }
    }
    
    return 0;
}