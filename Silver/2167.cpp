#include<bits/stdc++.h>

using namespace std;
int n, m, k;
int arr[301][301];
vector<int> result;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> k;

    for(int i = 0; i < k; i++) {
        int xa, ya, xb, yb;
        cin >> xa >> ya >> xb >> yb;

        int sum = 0;
        for(int j = xa; j <= xb; j++) {
            for(int k = ya; k <= yb; k++) {
                sum += arr[j][k];
            }
        }

        result.push_back(sum);

    }

    for(auto it = result.begin(); it != result.end(); it++) {
        cout << *it << "\n";
    }

    return 0;
}
