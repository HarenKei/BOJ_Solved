#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int aIdx = 0, bIdx = 0;
    

    cin >> n >> m;

    int a[n + 1];
    int b[m + 1];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    while(aIdx < n && bIdx < m) {
        if(a[aIdx] <= b[bIdx]) {
            cout << a[aIdx++] << " ";
        } else {
            cout << b[bIdx++] << " ";
        }
    }

    while(aIdx < n) {
        cout << a[aIdx++] << " ";
    }

    while(bIdx < m) {
        cout << b[bIdx++] << " ";
    }

    return 0;
}