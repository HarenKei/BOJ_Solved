#include <bits/stdc++.h>

using namespace std;

string roomNum;
int ans;
int numSet[10];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> roomNum;

    for(int i = 0; i < roomNum.length(); i++){
        numSet[roomNum[i] - '0']++;
    }

    for(int i = 0; i < 10; i++){
        if(i != 6 && i != 9){
            ans = max(ans, numSet[i]);
        }
    }
    
    int nineSix = (numSet[6] + numSet[9] + 1) / 2;

    cout << max(ans, nineSix) << '\n';


    
    return 0;
}