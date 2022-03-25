#include <algorithm>
#include <bits/stdc++.h> 

using namespace std;

int main(){
    vector<int> numArray;
    vector<int> countArray(10);

    int sum = 0;
    for(int i = 0; i < 10; i ++){
        int inputNum = 0;
        cin >> inputNum;
        numArray.push_back(inputNum);
        for(int j = 0; j < 10; j++){
            if(numArray[i] == numArray[j])
                countArray[i]++;
        }
        sum += inputNum;
    }
    cout << endl;
    int maxIndex = max_element(countArray.begin(),countArray.end()) - countArray.begin();

    cout << sum / 10 << endl << numArray[maxIndex] << endl;

}