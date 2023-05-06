#include <bits/stdc++.h>

using namespace std;

int chkPalindrome(string str, int cnt) {
    int s = 0;
    int e = str.length() - 1;
    
    while(s < e) {
        //양 끝 문자가 서로 다를때
        if(str[s] != str[e]) {
            //한 번도 문자를 지우지 않았다면 유사회문이다.
            if(cnt == 0){
                if(chkPalindrome(str.substr(s + 1, e - s), 1) == 0 || chkPalindrome(str.substr(s, e - s), 1) == 0) {
                    //왼쪽 혹은 오른쪽의 문자를 지운 결과 중 하나라도 회문이면 유사회문이므로.
                    return 1;
                }
            }
            return 2;
        }
        s++; e--;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        string str;
        cin >> str;

        cout << chkPalindrome(str, 0) << "\n";
    }

    return 0;
}