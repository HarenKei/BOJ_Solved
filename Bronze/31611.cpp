#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    cin >> x;

    if(x % 7 == 2) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
    
    return 0;
}