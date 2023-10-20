#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    vector<double> ans;

    cin >> n;

    for(int i = 0; i < n; i++) {
        double d, f, p;
        //개의 수, 개 한마리 당 사료량, 파운드 당 사료 가격
        cin >> d >> f >> p;
        ans.push_back(d * f * p);

    }

    cout << fixed;
    cout.precision(2);

    for(auto v : ans) {
        cout << "$" << v << "\n";
    }

    return 0;
}
