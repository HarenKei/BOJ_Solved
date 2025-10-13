#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

// n : 수의 개수
// m : 수의 변경이 일어나는 횟수
// k : 구간의 합을 구하는 횟수
int n, m, k;
vector<ll> arr;
vector<ll> segTree;

ll init(vector<ll> &arr, vector<ll> &segTree, int node, int start, int end);
void update(vector<ll> &segTree, int node, int start, int end, int idx, ll diff);
ll prefix(vector<ll> &segTree, int node, int start, int end, int left, int right);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k;

    arr.resize(n + 1);
    segTree.resize(4 * n);

    for(int i = 1; i <= n; i ++) {
        cin >> arr[i];
    }

    // 세그먼트 트리 초기화
    init(arr, segTree, 1, 1, n);

    for(int i = 0; i < m+k; i++) {
        ll a, b, c;
        cin >> a >> b >> c;

        if(a == 1) {
            // a가 1이면 갱신
            ll diff = c - arr[b];
            arr[b] = c;
            update(segTree, 1, 1, n, b, diff);
        } else if (a == 2) {
            // a가 2이면 구간합 
            cout << prefix(segTree, 1, 1, n, b, c) << "\n";
        }
    }

    return 0;
}

ll init(vector<ll> &arr, vector<ll> &segTree, int node, int start, int end) {
    // 노드가 리프노드인 경우
    if(start == end) 
        return segTree[node] = arr[start];

    // 현재 노드가 담당하는 구간을 정확히 반으로 나눔
    int mid = (start + end) / 2;

    return segTree[node] = init(arr, segTree, node * 2, start, mid) + init(arr, segTree, node * 2 + 1, mid + 1, end);
}

ll prefix(vector<ll> &segTree, int node, int start, int end, int left, int right) {
    // [start, end] 앞 뒤에 [left, right]가 있는 경우
    // 겹치지 않으므로 탐색을 더 이상 할 필요가 없음.
    if(left > end || right < start) return 0;

    // [start, end]가 [left, right]에 포함되는 경우
    if(left <= start && end <= right) return segTree[node];

    // 왼쪽 자식과 오른쪽 자식을 루트로 하는 트리에서 재탐색
    int mid = (start + end) / 2;

    return prefix(segTree, node * 2, start, mid, left, right) + prefix(segTree, node * 2 + 1, mid + 1, end, left, right);
}

void update(vector<ll> &segTree, int node, int start, int end, int idx, ll diff) {
    if (idx < start || idx > end) return;

    segTree[node] = segTree[node] + diff;

    // 리프 노드가 아닌 경우 자식도 변경해줘야함
    // 리프 노드인지 검사를 하고 아래 자식 노드 갱신
    // start == end => 리프 노드
    if(start != end) {
        int mid = (start + end) / 2;
        update(segTree, node * 2, start, mid, idx, diff);
        update(segTree, node * 2 + 1, mid + 1, end, idx, diff);
    }
}