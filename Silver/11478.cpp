#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    string temp = "";
    set<string> result;
    for(int i = 0; i < str.size(); i++){
        for(int j = i; j < str.size(); j++){
            temp += str[j];
            result.insert(temp);
        }
        temp = "";
    }

    cout << result.size() << "\n";


    return 0;
}