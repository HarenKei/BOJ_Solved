#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int n;
    int s = 1, e = 1, sum = 0, cnt = 0;

    cin >> n;

    while(e <= n + 1) {
        if(sum > n){
            sum -= s++;
        } else if(sum < n) {
            sum += e++;
        } else if(sum == n) {
            cnt++;
            sum += e++;
        }
    }

    cout << cnt << "\n";

    return 0;
}