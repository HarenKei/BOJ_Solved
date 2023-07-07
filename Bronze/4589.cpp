#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int arr[n + 1];
    bool chk = true;
    vector<string> r;

    while(n--) {
        vector<int> v(3);

        for(int i = 0; i < 3; i++) {
            cin >> v[i];
        }

        if(v[0] >= v[1] && v[1] >= v[2]) r.push_back("Ordered");
        else if(v[0] <= v[1] && v[1] <= v[2]) r.push_back("Ordered");
        else r.push_back("Unordered");
    }

    cout << "Gnomes:\n";
    for(auto it = r.begin(); it != r.end(); it++) {
        cout << *it << "\n";
    }
    return 0;
}
