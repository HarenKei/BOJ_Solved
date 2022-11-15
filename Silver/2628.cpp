#include <bits/stdc++.h>

using namespace std;

int h, v;
int cut, result;
vector<int> vert, hori;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> h >> v;
    cin >> cut;

    vert.push_back(0); vert.push_back(v);
    hori.push_back(0); hori.push_back(h);

    for(int i = 0; i < cut; i++){
        int vh, input;
        cin >> vh >> input;

        if(vh == 0) vert.push_back(input);
        else hori.push_back(input);
    }

    sort(vert.begin(), vert.end());
    sort(hori.begin(), hori.end());
    

    int verMax = 0;
    for(int i = 0; i < vert.size(); i++){
        if(vert[i+1] - vert[i] > verMax) verMax = vert[i+1] - vert[i];
    }
    
    int horMax = 0;
    for(int i = 0; i < hori.size(); i++){
        if(hori[i+1] - hori[i] > horMax) horMax = hori[i+1] - hori[i];
    }



    cout << verMax * horMax << '\n';

    return 0;
}