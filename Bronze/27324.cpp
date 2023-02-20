#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string str = to_string(n);

    if(str[0] == str[1]){
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
    
    return 0;
}