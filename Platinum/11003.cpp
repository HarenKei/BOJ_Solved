#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, l;
    vector<int> a;
    deque<int> deq; //인덱스만 저장할거임

    cin >> n >> l;

    a.resize(n);

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++) {
        while(deq.size() && a[deq.back()] > a[i]) {
            deq.pop_back();
        }
        deq.push_back(i);

        if(deq.front() <= i - l) {
            deq.pop_front();
        }

        cout << a[deq.front()] << ' ';
    }

    return 0;
}