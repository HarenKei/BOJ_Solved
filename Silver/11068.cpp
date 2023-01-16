#include <bits/stdc++.h>

using namespace std;

bool chkPanlindrome(int n){
    for(int i = 2; i <= 64; i++){
        int num = n;
        string str;
        string target_str;

        while(num != 0){
            str.push_back(num % i);
            num /= i;
        }

        for(int i = str.length() - 1; i >= 0; i--){
            target_str += str[i];
        }

        if(str == target_str){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(chkPanlindrome(n)){
            cout << 1 << "\n";
        } else {
            cout << 0 << "\n";
        }

    }

    return 0;
}