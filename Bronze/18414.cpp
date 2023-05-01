#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, l, r, result, m;
    cin >> x >> l >> r;
    
    m = abs(l - x);

    for(int i = l; i <= r; i++){
        if(m >= abs(i - x)){
            m = abs(i - x);
            result = i;
        }
    }

    cout << result << "\n";

    return 0;
}