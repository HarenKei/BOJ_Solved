#include<bits/stdc++.h>

using namespace std;

int fish[4];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 0; i < 4; i++) {
        cin >> fish[i];
    }

    if(fish[0] > fish[1] && fish[1] > fish[2] && fish[2] > fish[3]) {
        cout << "Fish Diving";
    } else if(fish[0] < fish[1] && fish[1] < fish[2] && fish[2] < fish[3]) {
        cout << "Fish Rising";
    } else if(fish[0] == fish[1] && fish[1] == fish[2] && fish[2] == fish[3]) {
        cout << "Fish At Constant Depth";
    } else {
        cout << "No Fish";
    }




    return 0;
}
