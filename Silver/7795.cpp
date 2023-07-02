#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, m, ans = 0;
        vector<int> a;
        vector<int> b;
        cin >> n >> m;

        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            a.push_back(input);
        }

        for(int i = 0; i < m; i++) {
            int input;
            cin >> input;
            b.push_back(input);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int bp = 0;


        for(int i = 0; i < n; i++) {
            while((bp < m) && (a[i] > b[bp])){
                bp++;
            }
            ans += bp;
        }

        cout << ans << "\n";
    }
    return 0;
}
