#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    int s = 0, e = n - 1;
    int min = 2000000000;
    vector<pair<int, int>> res;

    while(s < e) {
        int sum = v[s] + v[e];

        if(min > abs(sum)) {
            res.clear();
            min = abs(sum);
            res.push_back({s, e});

            if(sum == 0)
                break;
        }

        if(sum < 0) {
            s++;
        } else {
            e--;
        }
    }

    cout << v[res[0].first] << " " << v[res[0].second] << "\n";

    return 0;
}
