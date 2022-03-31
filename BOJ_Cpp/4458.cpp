#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testCase;
    cin >> testCase;
    cin.ignore();

    for(int i = 0; i < testCase; i++){
        string str;
        getline(cin, str);

        if(str[0] >= 97 && str[0] <= 122){
            str[0] -= 32;
        }

        cout << str << endl;
        
    }
    return 0;

}