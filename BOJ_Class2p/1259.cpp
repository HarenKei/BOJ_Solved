#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool chk = true;

    while(chk){
        string str;
        cin >> str;

        string rStr = str;
        reverse(rStr.begin(), rStr.end());

        if(str.length() == 1 && str[0] == '0'){
            chk = false;
        }else if(str == rStr){
            cout << "yes" << '\n';
        } else{
            cout << "no" << '\n';
        }
    }
    return 0;
}