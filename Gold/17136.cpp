#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph(10, vector<int>(10)); // 그래프
vector<int> paper = {0, 5, 5, 5, 5, 5}; // 사용 가능한 색종이 개수
int result = INT_MAX; // 최솟값 저장
void backtracking(int idx, int paperCnt); // (x, y) 좌표, 종이 사용 카운트
bool check(int x, int y, int paperSize); // 색종이 붙일 수 있는가?
void fill(int x, int y, int paperSize, int flag); // 색종이 붙이기 (그래프 0 -> 1)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> graph[i][j];
        }
    }

    // 탐색은 색종이를 붙일 수 있는 1번째 위치를 찾는 것으로 시작한다.
    // 왼쪽 위 -> 오른쪽 -> 오른쪽 끝 -> 왼쪽 위
    backtracking(0, 0);

    if(result == INT_MAX) {
        cout << -1 << "\n";
    } else {
        cout << result << "\n";
    }

    return 0;
}

// 가지 치기 조건
// 1. 현재 선택 위치에 색종이를 붙일 수 있는가? (1인가?)
// 2. 색종이 크기는 5가지고, 큰 것부터 사용한다.
// 3. 붙일 수 없다면 탐색을 종료한다.
// 4. 현재까지 사용한 색종이 수가 최솟값보다 크다면 탐색을 종료한다.
void backtracking(int idx, int paperCnt) {
    if(idx == 100) {
        // 좌표 끝일 때의 처리
        result = min(result, paperCnt);
        return;
    }

    int row = idx / 10;
    int col = idx % 10;
    

    // 현재까지 사용한 색종이 수가 최솟값보다 크거나 같다면 탐색 종료
    if(result <= paperCnt) return;

    if(graph[row][col] == 1) {
        for(int i = 5; i >= 1 ; i--) {
            if(paper[i] > 0 && check(row, col, i)) {
                paper[i]--; // 색종이 사용
                fill(row, col, i, 0); // 색종이 붙이기
                backtracking(idx + 1, paperCnt + 1);
                paper[i]++;
                fill(row, col, i, 1); // 색종이 떼기
            }
        }
    } else {
        backtracking(idx + 1, paperCnt);
    }
}

bool check(int r, int c, int paperSize) {
    if(r + paperSize > 10 || c + paperSize > 10) return false;

    for(int i = r; i < r + paperSize; i++) {
        for(int j = c; j < c + paperSize; j++) {
            if(graph[i][j] == 0) return false;
        }
    }

    return true;
}

void fill(int r, int c, int paperSize, int flag) {
    for(int i = r; i < r + paperSize; i++) {
        for(int j = c; j < c + paperSize; j++) {
                graph[i][j] = flag;
        }
    }
}
