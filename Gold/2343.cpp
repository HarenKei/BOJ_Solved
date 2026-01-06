#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    vector<int> lessons;
    int s = 0, e = 0;

    cin >> n >> m;

    lessons.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> lessons[i];
        s = max(s, lessons[i]);
        e += lessons[i];
    }

    while(s <= e) {
        int sum = 0; //구간의 합
        int cnt = 0; //블루레이 디스크의 개수
        int mid = (s + e) / 2;

        for(int i = 0; i < n; i++) {
            if(sum + lessons[i] > mid) {
                cnt++;
                sum = 0;
            }
            sum += lessons[i];
        }

        // lessons 탐색 후 sum이 0이 아니면 추가로 블루레이 디스크 한 장이 더 필요
        if(sum != 0) cnt++;

        // mid 값으로 모든 레슨 저장 불가
        if(cnt > m) s = mid + 1;
        // mid 값으로 모든 레슨 저장 가능
        else e = mid - 1;
    }

    cout << s << "\n";
    return 0;
}
