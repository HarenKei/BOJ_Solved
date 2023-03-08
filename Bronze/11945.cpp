#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    vector<string> v;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        reverse(input.begin(), input.end());
        v.push_back(input);
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << "\n";
    }
    
    return 0;
}