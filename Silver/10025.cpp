#include<bits/stdc++.h>
#define MAX 1000001

using namespace std;

int n, k, ans = 0;
vector<int> ice(MAX);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    int window = (k * 2) + 1;
    int sum = 0;
    int maxV = 0;

    for(int i = 0; i < n; i++) {
        int g, x;
        cin >> g >> x;
        ice[x] = g;
        maxV = max(maxV, x);
    }

    for(int i = 0; i <= maxV; i++) {
        if(i >= window) {
            sum -= ice[i - window];
        }

        sum += ice[i];
        ans = max(ans, sum);
    }

    cout << ans << "\n";
    
    return 0;
}
