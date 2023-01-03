#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector< pair<int, pair<pair<int, int>, pair<int, int> > > > medal;
    //금 ((은, 동), (국가번호, 등수))
    int n, k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int c, g, s, b;
        cin >> c >> g >> s >> b; 
        medal.push_back(make_pair(g, make_pair(make_pair(s, b), make_pair(c, 1))));
        //등수는 전부 1등으로 초기화를 해놓습니다.
    }


    sort(medal.begin(), medal.end(), greater<pair<int, pair<pair<int, int>, pair<int, int> > > >());
    //금메달을 기준으로 내림차순 정렬

    for(int i = 1; i < n; i++){
        if(medal[i].first == medal[i-1].first && medal[i].second.first.first == medal[i - 1].second.first.first && medal[i].second.first.second == medal[i - 1].second.first.second ){
            //i번째 메달 수 및 배분이 i - 1과 동일할경우
            medal[i].second.second.second = medal[i-1].second.second.second;
            
            //동석차를 만들어보고
        } else{
            //동일하지 않으면 어쨌든 정렬되어있는 상태에서 i는 i-1보다 딸리는게 맞으니까
            //등수를 증가시킨다.
            medal[i].second.second.second = i + 1;
        }
    }


    for(int i = 0; i < n; i++){
        if(medal[i].second.second.first == k){
            cout << medal[i].second.second.second << "\n";
            return 0;
        }
    }




    return 0;
}