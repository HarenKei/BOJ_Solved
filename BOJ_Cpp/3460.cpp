#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int caseNum;
    cin >> caseNum;

    while(caseNum != 0){
        int numInput = 0;
        int indexBin = 0;
        cin >> numInput;

        while(numInput != 0){
            
            if(numInput % 2 == 1)
                cout << indexBin << " ";

            numInput /= 2;
            indexBin++;
        }
        caseNum--;
    }
}