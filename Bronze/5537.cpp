#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    while(n--){
        string str;
        string result;

        cin >> str;

        for(int i = 0; i < str.length(); i++){
            if(result == " " || result[result.length() - 1] != str[i]){
                result.push_back(str[i]);
            } else {
                continue;
            }
        }

        cout << result << "\n";
    }

    return 0;
}