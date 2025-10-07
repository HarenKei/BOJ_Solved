#include <bits/stdc++.h>

using namespace std;

struct compare
{
    bool operator()(int o1, int o2) {
        int firstAbs = abs(o1);
        int secondAbs = abs(o2);

        if(firstAbs == secondAbs) {
            return o1 > o2;
        } else {
            return firstAbs > secondAbs;
        }
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, compare> pq;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if(input == 0) {
            if(pq.empty()) {
                cout << 0 << "\n";
            } else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else {
            pq.push(input);
        }
    }


    return 0;
}
