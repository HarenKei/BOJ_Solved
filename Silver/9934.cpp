#include<bits/stdc++.h>
using namespace std;

int node[10024]; //노드 방문 순서를 입력받을 배열
vector<int> result[10];// 중위 순회 결과를 저장할 벡터

// 완전 이진 트리를 구성하고 중위 순회 결과를 저장하는 함수
void buildTree(int depth, int start, int end) {
    if (start >= end)
        return;

    int mid = (start + end) / 2;
    //중위순회이므로 가운데는 루트 노드

    result[depth].push_back(node[mid]);
    // 왼쪽 자식 노드로 재귀 호출
    buildTree(depth + 1, start, mid );
    // 오른쪽 자식 노드로 재귀 호출
    buildTree(depth + 1, mid + 1, end);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;

    int nodeCnt = (1 << k) - 1;

    for(int i = 0; i < nodeCnt; i++) {
        cin >> node[i];
    }

    buildTree(0,0, nodeCnt);

    for(int i = 0; i < k; i++) {
        for(auto j : result[i]) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
