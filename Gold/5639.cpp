#include<bits/stdc++.h>
#define MAX 10001
using namespace std;

vector<int> tree;
int input;

void postOrder(int start, int end) {
    if (start >= end)
        return;

    if(start == end - 1) {
        cout << tree[start] << "\n";
        return;
    }
    //현재 탐색 범위에 노드가 하나만 있는 경우를 체크하기 위한 조건
    //후위 순회에서는 왼쪽 서브트리, 오른쪽 서브트리, 루트 순서로 노드를 방문하므로
    //탐색 범위에 노드가 하나만 있는 경우에는 해당 노드를 출력하고 함수를 종료하면 됨.
    //재귀호출의 종료조건을 설정하고 단일 노드를 출력함.

    int idx = start + 1; //탐색할 다음 노드 인덱스

    while(idx < end) {
        if(tree[start] < tree[idx]) {
            //탐색을 시작한 노드보다 다음 노드가 크면 오른쪽 노드다.
            break;
        }
        idx++;
    }

    postOrder(start + 1, idx);
    //왼쪽 노드에 대한 탐색
    postOrder(idx, end);
    //오른쪽 노드에 대한 탐색
    cout << tree[start] << "\n";
    //루트 노드 출력
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while(cin >> input) {
        tree.push_back(input);
    }

    postOrder(0, tree.size());

    return 0;
}
