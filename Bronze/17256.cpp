#include <bits/stdc++.h>

using namespace std;

int cakeA[3];
int cakeC[3];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> cakeA[0] >> cakeA[1] >> cakeA[2];
    cin >> cakeC[0] >> cakeC[1] >> cakeC[2];


    cout << cakeC[0] - cakeA[2] << " " << cakeC[1] / cakeA[1] << " " << cakeC[2] - cakeA[0] << '\n';

    
    return 0;
}