#include<bits/stdc++.h>

using namespace std;

int n, k, ans = 0;
bool alphabet[26];
vector<string> str;

void DFS(int idx, int depth) {
    if(depth == k - 5) {
        int cnt = 0;

        for(int i = 0; i < str.size(); i++) {
            bool chk = true;

            for(int j = 0; j < str[i].size(); j++) {
                int alphabetIdx = str[i][j] - 'a';
                if(alphabet[alphabetIdx] == false) {
                    chk = false;
                    break;
                }
            }
            if(chk) cnt++;
        }
        ans = max(ans, cnt);
        return;
    } else {
        for(int i = idx; i < 26; i++) {
            if(alphabet[i] == false) {
                alphabet[i] = true;
                DFS(i, depth + 1);
                alphabet[i] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    //a, c, i, n, t는 무조건 배우고 있다. 즉 새로 배워야 하는 알파벳은 k - 5
    alphabet['a' - 'a'] = true;
    alphabet['c' - 'a'] = true;
    alphabet['i' - 'a'] = true;
    alphabet['n' - 'a'] = true;
    alphabet['t' - 'a'] = true;

    for(int i = 0; i < n; i++) {
        string input;
        cin >> input;
        str.push_back(input);
    }

    DFS(0, 0);

    cout << ans << "\n";


    return 0;
}
