#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, s,e, ans = 0;
    vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    s = 0;
    e = v.size() - 1;

    while(s < e) {
        if(v[s] + v[e] >= m) {
            s++;
            e--;
            ans++;
        } else if(v[s] + v[e] < m){
            s++;
        }
    }

    cout << ans << "\n";
    
    return 0;
}
