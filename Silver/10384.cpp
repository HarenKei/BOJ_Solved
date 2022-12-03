#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n; //테스트 케이스
    cin.ignore();

    for(int i = 1; i <= n; i++){
        string str;
        getline(cin, str);
    
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        int alphabet[26] = {0,};
        for(int j = 0; j < str.length(); j++){
            alphabet[str[j] - 97]++;
        }

        int cnt[3] = {0,}; //[0] : 팬그램 [1] : 더블 팬그램 [2] : 트리플 팬그램

        for(int j = 0; j < 26; j++){
            if(alphabet[j] != 0){
                cnt[0]++;
            }
            if(alphabet[j] == 2){
                cnt[1]++;
            }
            if(alphabet[j] >= 3){
                cnt[2]++;
            }
        }

        if(cnt[2] == 26){
            cout << "Case " << i << ": " << "Triple pangram!!!\n";
        } else if(cnt[1]==26 || cnt[1] + cnt[2] == 26){
            cout << "Case " << i << ": " << "Double pangram!!\n";
        } else if(cnt[0] == 26){
            cout << "Case " << i << ": " << "Pangram!\n";
        } else {
            cout << "Case " << i << ": " << "Not a pangram\n";
        }
    }


    return 0;
}