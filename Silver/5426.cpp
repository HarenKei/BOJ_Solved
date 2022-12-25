#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string str, ans;
        cin >> str;
        int len = sqrt(str.length());

        char arr[len][len];

        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                arr[i][j] = str[j + (len * i)];
            }
        }

        for(int j = len - 1; j >= 0; j--){
            for(int i = 0; i < len; i++){
                ans += arr[i][j];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}