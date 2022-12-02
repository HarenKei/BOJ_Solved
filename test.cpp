#include <bits/stdc++.h>

using namespace std;

int n;
int alphabet[26];
int cnt[3];
string ans = "Not a pangram!";

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    while(n--){
        string str;
        cin >> str;

        transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return tolower(c); });

        for(int i = 0; i < str.size(); i++){
            alphabet[str[i]-97]++;
        }

        for(int i = 0; i < 26; i++){
            for(int j = 0; j < alphabet[i]; j++){
                if(alphabet[i] != 0){
                    if(alphabet[i] >= 1){cnt[0]++;}
                    if(alphabet[i] >= 2){cnt[1]++;}
                    if(alphabet[i] >= 3){cnt[2]++;}
                }
            }
        }
        //10384

        if(cnt[0)
        cout << cnt[0] << cnt[1] << cnt[2] << endl;

        
    }


    return 0;
}