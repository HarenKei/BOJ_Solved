#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    if((100 * n) >= m) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    
    return 0;
}