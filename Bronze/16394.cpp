#include <iostream>

using namespace std;

int year;
int hongik = 1946;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> year;

    cout << year - hongik << '\n';

    return 0;
}