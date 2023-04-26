#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string str;

    cin >> n;
    cin >> str;
    
    int len = str.length();

    if(str[len - 1] != 'G') {
        cout << str << 'G' << "\n";
    } else {
        for(int i = 0; i < len - 1; i++ ) {
            cout << str[i];
        }
        cout << "\n";
    }

    return 0;
}