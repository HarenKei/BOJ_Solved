#include <bits/stdc++.h>

using namespace std;

int n; //로프의 개수
int maxWeight = 1; //최대값을 찾기 위함
vector<int> rope(n);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int wei; //로프 별 하중
        cin >> wei;
        rope.push_back(wei);
    }
    
    sort(rope.begin(), rope.end(), greater<int>()); //로프 길이를 내림차순으로 정렬

    for(int i = 0; i < n; i++){
        if(maxWeight < rope[i] * (i+1))
            maxWeight = rope[i] * (i+1);
    }

    cout << maxWeight << '\n';

    return 0;
}