#include<bits/stdc++.h>

using namespace std;

int n, m, ans = 0;
int parent[1001];

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
    vector<pair<int, pair<int, int>>> MAP(m);

    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        MAP[i] = {c, {a, b}};
    }

    //각자 노드의 부모를 자기 자신으로 설정.
    for(int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    //비용 적은 순 오름차순 정렬
    sort(MAP.begin(), MAP.end());

    for(int i = 0; i < m; i++) {
        int cost = MAP[i].first;
        int start = MAP[i].second.first;
        int end = MAP[i].second.second;

        if(!findParent(start, end)) {
            ans += cost;
            unionParent(start, end);
        }
    }

    cout << ans << "\n";

    return 0;
}
