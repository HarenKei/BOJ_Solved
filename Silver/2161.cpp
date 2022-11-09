#include <bits/stdc++.h>

using namespace std;

deque<int> dq;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        dq.push_back(i);
    }

    while(!dq.empty())
    {   
        cout << dq.front() << " ";
        dq.pop_front(); //맨 윗장의 카드를 버리고
        dq.push_back(dq.front()); 
        dq.pop_front(); //그 다음 제일 위 카드를 아래로 옮기고
    }

    return 0;
}