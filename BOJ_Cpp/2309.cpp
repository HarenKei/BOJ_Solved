#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> dwarf;
    int dwarfSum = 0;

    for(int i = 0; i < 9; i++){
        int heightInput;
        cin >> heightInput;
        dwarf.push_back(heightInput);
        dwarfSum += heightInput;
    }
    
    dwarfSum -= 100;
    sort(dwarf.begin(), dwarf.end());

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++)
            if(dwarf[i] + dwarf[j] == dwarfSum){
                for(int k = 0; k<9; k++){
                    if(k != i && k != j){
                        cout << dwarf[k] << endl;
                    }
                }
                return 0;
            }
    }
    return 0;
}