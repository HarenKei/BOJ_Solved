#include<bits/stdc++.h>

using namespace std;

int v, e, ans = 0;
int parent[10001];

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

    cin >> v >> e;

    vector<pair<int, pair<int, int>>> MAP(e);

    for(int i = 0; i < e; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        MAP[i] = {c, {a, b}};
    }

    for(int i = 1; i <= v; i++) {
        parent[i] = i;
    }

    sort(MAP.begin(), MAP.end());

    for(int i = 0; i < e; i++) {
        int start = MAP[i].second.first;
        int end = MAP[i].second.second;
        int cost = MAP[i].first;

        if(!findParent(start, end)) {
            ans += cost;
            unionParent(start, end);
        }
    }

    cout << ans << "\n";

    return 0;
}
