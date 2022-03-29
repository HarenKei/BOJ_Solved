#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> money;
    int sum = 0, testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++){
        int inputNum = 0;
        cin >> inputNum;
        int vecLast = 0;

        if(inputNum != 0){
            money.push_back(inputNum);
            sum += inputNum;
        } else{
            sum -= money.back();
            money.pop_back();
        }

    
    }
 
    cout << sum << endl;
}