#include <bits/stdc++.h>

using namespace std;

int n, cnt;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    while(n--){
        string str;
        cin >> str;
        bool chk = true;

        for(int i = 0; i < str.length(); i++){
            for(int j = 0; j < i; j++){
                if((str[i-1] == str[i]) || (str[j] != str[i])){
                    continue;
                }else{ 
                    chk = false; 
                    break;
                }
            }
        }
        if(chk) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}