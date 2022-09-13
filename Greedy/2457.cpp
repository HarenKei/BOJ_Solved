#include <bits/stdc++.h>

using namespace std;

//기준 301, 1130
int n; //꽃의 개수
vector< pair<int, int> > flower;
int chkTime;
int ans;
int cnt;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int m1, d1, m2, d2;
        cin >> m1 >> d1 >> m2 >> d2;
        flower.push_back(make_pair((m1 * 100 + d1), (m2 * 100 + d2)));
    }
    
    sort(flower.begin(), flower.end()); //피는 날 기준 정렬

    if(flower[0].first > 301){
        cout << 0 << '\n';
        return 0;
    }

    

    cout <<  cnt << '\n';

}