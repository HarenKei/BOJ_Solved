#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, start = 0, result = 0, far = 0;
    vector<int> book;

    cin >> n >> m;
    book.push_back(0);
    //시작 지점(0) 확보를 위함

    for(int i = 0; i < n; i++) {
        int position;
        cin >> position;
        book.push_back(position);
    }

    sort(book.begin(), book.end());
    far = max(abs(book[0]), abs(book[n]));
    //정렬 후 음수 끝, 양수 끝 중 가장 먼 거리를 저장함 (마지막으로 방문하기 위함)
    //마지막으로 방문하면 시작점으로 돌아오지 않아도 됨.

    for(int i = 0; i <= n; i++) {
        if(book[i] == 0) {
            start = i;
            break;
        }
    }
    //값이 0인 지점의 인덱스 확보

    for(int i = 0; i < start; i += m) {
        result += abs(book[i] * 2);
    }
    //음수 영역 탐색

    for(int i = n; i > start; i -= m) {
        result += abs(book[i] * 2);
    }
    //양수 영역 탐색

    cout << result - far << "\n";

    return 0;
}
