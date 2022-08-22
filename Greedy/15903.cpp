#include <bits/stdc++.h>

using namespace std;

int n, m;
long long result;

priority_queue<long long, vector<long long>, greater<long long> > card; //오름차순 정렬

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        long long input;
        cin >> input;
        card.push(input);
    }

    while(m--){
        long long card1 = card.top(); card.pop();
        long long card2 = card.top(); card.pop();

        card.push(card1 + card2); card.push(card1 + card2);
    }

    while(!card.empty()){
        result += card.top();
        card.pop();
    }

    cout << result << '\n';

    return 0;
}