#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    if(a < b){
        cout << -1 << "\n";
    } else if(a == b){
        cout << 0 << "\n";
    } else {
        cout << 1 << "\n";
    }

    return 0;
}