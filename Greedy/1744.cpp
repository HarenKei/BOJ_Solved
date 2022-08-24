#include <bits/stdc++.h>

using namespace std;

int n;
int result = 1;
priority_queue<int> pq1;
priority_queue<int, vector<int>, greater<int>> pq2;
vector<int> vec;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        
        if(num > 0){
            pq1.push(num);
        } else{
            pq2.push(num);
        }
    }

    while(!pq1.empty()){ //양수부터 처리하자
        int a = pq1.top();
        pq1.pop();

        result += (a * pq1.top());
        pq1.pop();
    }

    while(!pq2.empty()){
        int a = pq1.top();
        pq1.pop();

        result += (a * pq2.top());
        pq2.pop();
    }

    
    cout << result << '\n';

    return 0;
}