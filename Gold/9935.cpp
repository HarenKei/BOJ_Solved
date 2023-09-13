#include<bits/stdc++.h>

using namespace std;

string target;
string bomb;
string ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> target >> bomb;

    for(char i : target) {
        ans += i;

        if(ans.back() == bomb.back()) {
            if(ans.length() < bomb.length()) continue;

            string tmp;
            for(int j = bomb.size() - 1; j >= 0; j--) {
                if(ans.back() != bomb[j]) {
                    reverse(tmp.begin(), tmp.end());
                    ans += tmp;
                    tmp = "";
                    break;
                } else {
                    tmp += ans.back();
                    ans.pop_back();
                }
            }
        }
    }

    if(ans.empty()) {
        cout << "FRULA\n";
    } else {
        cout << ans << "\n";
    }

    return 0;
}
