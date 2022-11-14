#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> name;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        string str;
        cin >> str;

        for(int j = 0; j < str.length(); j++){
            if(str[j] >= 'A' && str[j] <= 'Z'){
                str[j] = str[j] + 32;
            }
        }

        name.push_back(str);
    }

    for(auto it = name.begin(); it != name.end(); it++){
        cout << *it << '\n';
    }

    return 0;
}