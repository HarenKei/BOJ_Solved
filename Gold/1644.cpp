#include <bits/stdc++.h>

using namespace std;

int n;
int primeArray[4000001];
vector<int> primeNum;

void eratos() {
    for(int i = 2; i <= n; i++) {
        primeArray[i] = i;
    }

    for(int i = 2; i * i <= n; i++) {
        if(primeArray[i] == i) {
            for(int j = i * i; j <= n; j += i) {
                primeArray[j] = i;
            }
        }
    }

    for(int i = 2; i <= n; i++) {
        if(primeArray[i] == i) {
            primeNum.push_back(i);
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    eratos();

    int s = 0, e = 0, ans = 0, sum = 0;

    while(1) {
        if(sum > n) {
            sum -= primeNum[s++];
        } else if (sum < n) {
            if(e < primeNum.size()) sum += primeNum[e++];
            else break;
        } else {
            ans++;
            if(e < primeNum.size()) sum += primeNum[e++];
            else break;
        }
    }

    cout << ans << "\n";


    return 0;
}
