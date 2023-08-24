#include<bits/stdc++.h>
#define MAX 9876543210

using namespace std;

int n;
vector<long long> v;

void DFS(long long num, int depth) {
    if(depth > 10) {
        return;
    }
        v.push_back(num);

    for(int i = num % 10 - 1; i >= 0; i--) {
        DFS(num * 10 + i, depth + 1);
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i <= 9; i++) {
        DFS(i, 1);
    }

    sort(v.begin(), v.end());

    if(n > v.size()) {
        cout << "-1\n";
    } else {
        cout << v[n - 1] << "\n";
    }
    
    return 0;
}
