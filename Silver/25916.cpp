#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int s = 0, e = 0, sum = 0, result = 0;

    cin >> n >> m;

    int arr[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(e <= n + 1){
        if(sum > m) {
            sum -= arr[s++];
        } else if(sum <= m) {
            result = max(result, sum);
            sum += arr[e++];
        }
    }

    cout << result << "\n";

    return 0;
}