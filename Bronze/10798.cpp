#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> s;

    for(int i = 0; i < 5; i++) {
        string str;
        cin >> str;
        s.push_back(str);
    }

    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 5; j++) {
            if(i < s[j].size()) {
                cout << s[j][i];
            }
        }
    }

    cout << "\n";
    return 0;
}