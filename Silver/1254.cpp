#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    cin >> s;

    int len = s.size();
    bool chk = true;

    for(int i = 0; i < len; i++){
        chk = true;
        for(int j = i; j < len; j++){
            if(s[j] != s[len - 1 - (j - i)]){
                chk = false;
                break;
            }
        }

        if(chk){
            cout << len + i << "\n";
            break;
        }
    }

    return 0;
    //참고자료 : https://bluebluediary.tistory.com/51
}