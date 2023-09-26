#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string semina;
        cin >> semina;

        if(semina == "Algorithm") {
            cout << "204\n";
        } else if(semina == "DataAnalysis") {
            cout << "207\n";
        } else if(semina == "ArtificialIntelligence") {
            cout << "302\n";
        } else if(semina == "CyberSecurity") {
            cout << "B101\n";
        } else if(semina == "Network") {
            cout << "303\n";
        } else if(semina == "Startup") {
            cout << "501\n";
        } else {
            cout << "105\n";
        }

    }


    return 0;
}
