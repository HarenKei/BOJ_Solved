#include <bits/stdc++.h>
using namespace std;

int Find(int target);
void Union(int a, int b);
int n, m;
vector<int> unf;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    // unf를 각자 자기 자신으로 초기화
    unf.resize(n + 1);
    iota(unf.begin(), unf.end(), 0);

    while(m--) {
        int op, a, b;
        cin >> op >> a >> b;

        if(op == 0) {
            Union(a, b);
        } else if (op == 1) {
            if(Find(a) == Find(b)) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}

int Find(int target) {
    if(target == unf[target]) return target;
    else return unf[target] = Find(unf[target]);
}

void Union(int a, int b) {
    int aParent = Find(a);
    int bParent = Find(b);

    if(aParent != bParent) {
        unf[aParent] = bParent;
    }
}