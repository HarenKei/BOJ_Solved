#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, m = 0, s = 0, e = 0, ans = 0;
    vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    int sum = 0;

    while(e < n) {
        if(sum < m) {
            sum += v[e];
            e++;
        }

        if(sum >= m) {
            if (sum == m) {
                ans++;
            }

            sum -= v[s];
            s++;
        }

    }

    cout << ans << "\n";




    return 0;
}