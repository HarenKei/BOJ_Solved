#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    float sum, ans, tmp;
    vector<int> v;
    cin >> n;

    if(n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    tmp = round(n * 0.15);

    sort(v.begin(), v.end());

    for(int i = tmp; i < n - tmp; i++) {
        sum += v[i];
    }

    ans = round(sum / (n - (tmp* 2)));

    cout << ans << "\n";


    return 0;
}

