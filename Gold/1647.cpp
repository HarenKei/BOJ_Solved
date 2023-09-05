#include<bits/stdc++.h>

using namespace std;

int n, m, ans = 0;
int parent[100001];

//부모 노드 탐색
int getParent(int x) {
    if(parent[x] == x) return x;
    return parent[x] = getParent(parent[x]);
}

//두 부모 노드를 합치기
void unionParent(int a, int b) {
    a = getParent(a);
    b = getParent(b);

    if(a < b) parent[b] = a;
    else parent[a] = b;
}

//같은 부모를 가지는지 확인
bool findParent(int a, int b) {
    a = getParent(a);
    b = getParent(b);

    if(a == b) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    vector<pair<int, pair<int, int>>> v(m);

    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v[i] = {c, {a, b}};
    }

    for(int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    sort(v.begin(), v.end());

    int maxCost = 0;
    for(int i = 0; i < m; i++) {
        int start = v[i].second.first;
        int end = v[i].second.second;
        int cost = v[i].first;

        if(!findParent(start, end)) {
            maxCost = max(maxCost, cost);
            ans += cost;
            unionParent(start, end);
        }
    }

    cout << ans - maxCost << "\n";

    return 0;
}
