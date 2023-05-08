#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, ans;
    int alphabet[26];
    char tmp[26];

    memset(alphabet, -1, sizeof(alphabet));
    cin >> s;

    int len = s.length();

    for(int i = 0; i < len; i++) {
        tmp[i] = s[i];
        alphabet[s[i] - 'a'] = i;
    }

    if(len == 26) {
        if(next_permutation(tmp, tmp + 27)) {
            cout << tmp << "\n";
        } else {
            cout << -1 << "\n";
        }
    } else {
        for(int i = 0; i < 26; i++) {
            if(alphabet[i] == -1) {
                s += i + 'a';
                cout << s << endl;
                break;
            }
        }
    }


    return 0;
}