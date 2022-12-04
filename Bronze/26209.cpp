#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool chk = true;

    for(int i = 0; i < 8; i++){
        int input;
        cin >> input;
        if(input != 0 && input != 1) chk = false;
    }

    if(chk) cout << "S\n";
    else cout << "F\n";
    
    return 0;
}