#include <bits/stdc++.h>

using namespace std;

int n;
int cnt;
int chkTime;
vector< pair<int, int> > meeting;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;

        meeting.push_back(make_pair(end, start)); 
        // sort 함수는 first를 기준으로 정렬, 따라서 종료 시간을 first로
    }
    sort(meeting.begin(), meeting.end());

    chkTime = meeting[0].first;

    for(int i = 1; i < n; i++){
       if(chkTime <= meeting[i].second){ //전 회의가 끝나는 시간과 다음 회의의 시작 시간이 같거나 뒤면 가능
        cnt++;
        chkTime = meeting[i].first;
       }
    }
    
    cout << cnt+1 << '\n'; //어쨌든 1개의 회의는 무조건 진행할 수 있다.

    return 0;
}