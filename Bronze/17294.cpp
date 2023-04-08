#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long k;
    int tmp = 0;
    vector<int> num;
    cin >> k;

    while(k > 0) {
        tmp = k % 10;
        k /= 10;
        num.push_back(tmp);
    }

    int gap = num[0] - num[1];

    for(int i = 1; i < num.size(); i++) {
        if(num[i - 1] - num[i] != gap) {
           cout << "흥칫뿡!! <(￣ ﹌ ￣)>\n";
           return 0;
        }
    }
    
    cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!\n";


    return 0;
}