#include <bits/stdc++.h>

using namespace std;

int n;
int result;
priority_queue<int> pq1; //양수는 내림차순
priority_queue< int, vector<int>, greater<int> > pq2; //0, 음수는 오름차순 정렬


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    while(n--){
        int num;
        cin >> num;

        if(num > 0) pq1.push(num);
        else pq2.push(num);
    }

    while(!pq1.empty()){
        if(pq1.size() >= 2){
            int topNum = pq1.top(); pq1.pop();
            if(pq1.top() == 1){
                result += (topNum + pq1.top()); pq1.pop();
            } else{
                result += (topNum * pq1.top()); pq1.pop();
            }
        } else{
            result += pq1.top();
            pq1.pop();
        }
    }

    while(!pq2.empty()){
        if(pq2.size() >= 2){
            int topNum = pq2.top(); pq2.pop();
            result += (topNum * pq2.top()); pq2.pop();
        } else{
            result += pq2.top();
            pq2.pop();
        }
    }

    cout << result << '\n';
    

    return 0;
}