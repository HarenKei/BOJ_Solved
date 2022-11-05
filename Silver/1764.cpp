#include <bits/stdc++.h>

using namespace std;

int n, m;
map<string, int> name;
vector<string> res;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        name.insert(make_pair(input, 1));
    }

    for(int i = 0; i < m; i++){
        string input;
        cin >> input;

        if(name[input] == 1)
            res.push_back(input);
    }

    sort(res.begin(), res.end());
    cout << res.size() << '\n';
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << '\n';
    }

    


    return 0;
}