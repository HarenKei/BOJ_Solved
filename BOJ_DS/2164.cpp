#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    queue<int> card;

    cin >> n;

    for(int i = 1; i <= n; i++){
        card.push(i);
        //cout << "queue input : "  << card.back() << endl;
    }

    while (card.size() > 1){
        card.pop(); // 맨 위의 카드를 바닥에 버린다.
        card.push(card.front());
        //cout << "제거 queue :: " << card.front() << endl; //그 다음 맨 위의 카드를 맨 뒤에 넣는다.
        card.pop(); // 맨 위의 카드를 큐에서 제거.
    }

    cout << card.back() << '\n';

    return 0;
}