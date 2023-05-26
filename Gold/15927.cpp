#include <bits/stdc++.h>

using namespace std;

bool chkPal(string s) {
    int strLen = s.length();
    for(int i = 0; i < strLen; i++) {
        if(s[i] != s[strLen - i - 1]) {
            return false;
        }
    }
    return true;
}

bool chkSame(string s) {
    int strLen = s.length();

    int tmp = s[0];
    for(int i = 1; i < strLen; i++) {
        if(s[i] != tmp) {
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    int strLen = str.length();

    if(chkPal(str)) {
        if(chkSame(str)) {
            cout << -1 << "\n";
        } else {
            cout << strLen - 1 << "\n";
        }
    } else {
        cout << strLen << "\n";
    }

    return 0;
}
