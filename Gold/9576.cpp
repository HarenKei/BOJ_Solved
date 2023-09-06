#include<bits/stdc++.h>

#define MAX 20001

using namespace std;

int t;
vector<pair<int, int>> arr; //a ~ b 사이 책
int bookNode[1001]; //책 점유한 학생 정보
bool visited[1001];

// 매칭에 성공한 경우 t, 실패 false
bool DFS(int x) {
    //연결된 모든 노드에 대해서 들어갈 수 있는지
    for (int i = arr[x].first; i <= arr[x].second; i++) {

        //이미 처리한 노드는 더 이상 볼 필요 X
        if (visited[i]) continue;
        visited[i] = true;

        //비어있거나 점유 노드에 더 들어갈 공간이 있는 경우
        if (bookNode[i] == -1 || DFS(bookNode[i])) {
            bookNode[i] = x;
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--) {
        int n, m, ans = 0;
        cin >> n >> m;

        arr.clear();
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            arr.push_back({a, b});
        }

        memset(bookNode, -1, sizeof(bookNode));

        for (int i = 0; i < m; i++) {
            memset(visited, false, sizeof(visited));
            if (DFS(i)) ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
