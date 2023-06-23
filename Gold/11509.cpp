#include<bits/stdc++.h>

using namespace std;

int n, arrow = 0;
vector<int> balloon(1000001);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++) {
        int h;
        cin >> h;

        if(balloon[h + 1] == 0) {
            //입력받은 풍선보다 1 높은 곳에서 날아오는 화살이 없다면?
            balloon[h]++;
            arrow++;
        } else {
            //있다면
            balloon[h + 1]--;
            balloon[h] ++;
        }

    }

    cout << arrow << "\n";
    
    return 0;
}
