#include <bits/stdc++.h>

using namespace std;

string name;
int alphabetCnt[26];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> name;

    for(int i = 0; i < name.length(); i++){
        alphabetCnt[name[i] - 'A']++;
    }

    int cntOdd = 0;
    int idx = -1; // 0도 인덱스가 될 수 있기 때문에 -1...

    for(int i = 0; i < 26; i++){
        if(alphabetCnt[i] % 2 != 0){
            cntOdd++;
            idx = i;
            alphabetCnt[i]--;
        }
    }

    string ans;
    string revAns = "";

    if(cntOdd > 1){
        cout << "I'm Sorry Hansoo\n";
        return 0;
    } else {
        

        for(int i = 0; i < 26; i++){
            if(alphabetCnt[i] > 0){
                for(int j = 0; j < alphabetCnt[i] / 2; j++){
                    ans += i + 'A';
                }
            }
        }

        revAns = ans;
        reverse(revAns.begin(), revAns.end());

        if(idx != -1){
            ans += idx + 'A';
        }
        ans += revAns;

    }

    cout << ans << "\n";

    return 0;
}