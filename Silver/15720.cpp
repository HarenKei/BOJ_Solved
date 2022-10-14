#include <bits/stdc++.h>

using namespace std;

int b, c, d;
vector<int> burger, side, drink;
int totalSum, dcSum;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> b >> c >> d;

    for(int i = 0; i < b; i++){
        int price;
        cin >> price;
        totalSum += price;
        burger.push_back(price);
    }
    for(int i = 0; i < c; i++){
        int price;
        cin >> price;
        totalSum += price;
        side.push_back(price);
    }
    for(int i = 0; i < d; i++){
        int price;
        cin >> price;
        totalSum += price;
        drink.push_back(price);
    }

    int maxSetCnt = min(min(b,c), d);
    sort(burger.begin(), burger.end(), greater<int>());
    sort(side.begin(), side.end(), greater<int>());
    sort(drink.begin(), drink.end(), greater<int>());

    for(int i = 0; i < maxSetCnt; i++) {
        dcSum += burger[i];
        dcSum += side[i];
        dcSum += drink[i];
    }
    dcSum *= 0.9;

    for(int i = maxSetCnt; i < b; i++) dcSum += burger[i];
    for(int i = maxSetCnt; i < c; i++) dcSum += side[i];
    for(int i = maxSetCnt; i < d; i++) dcSum += drink[i];

    cout << totalSum << '\n' << dcSum << '\n';

    return 0;
}