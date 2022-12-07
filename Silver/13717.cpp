#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, pokemonSum = 0;
    vector< pair<int, string> > dogam;
    pair<int, string> maxPokemon;
    cin >> n;

    while(n--){
        string pokemon;
        int k, m, cnt = 0;
        cin >> pokemon;
        cin >> k >> m;

        while(m >= k){
            m = (m - k) + 2;
            cnt++;
        }

        if(cnt > maxPokemon.first){
            maxPokemon.first = cnt;
            maxPokemon.second = pokemon;
        }
        pokemonSum += cnt;
    }


    cout << pokemonSum << "\n" << maxPokemon.second << "\n";

    return 0;
}