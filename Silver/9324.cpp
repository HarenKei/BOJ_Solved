#include <bits/stdc++.h>

using namespace std;

int t;
int alphabet[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while(t--){
        string str;
        bool flag = true;
        int cnt = 0;

        cin >> str;

        for(int i = 0; i < str.length(); i++){
            alphabet[str[i] - 'A']++;

            if(alphabet[str[i] - 'A'] == 3){
                if(str[i] == str[i+1] && i + 1 < str.length()){
                    i++;
                    alphabet[str[i] - 'A'] = 0;
                } else{
                    flag = false;
                }
            }
        }
        memset(alphabet, 0, sizeof(alphabet));

        if(flag) cout << "OK\n";
        else cout << "FAKE\n"; 
    }
    return 0;
}