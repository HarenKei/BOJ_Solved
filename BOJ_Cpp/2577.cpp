#include <iostream>

using namespace std;

int main() {
    int count[10] = {0};
    int a, b, c;

    cin >> a >> b >> c;

    int num = a * b * c;

    while(num != 0) {
        count[num % 10] ++;
        num /= 10;
    }
    
    for (int i = 0; i < 10; i++){
        cout << count[i] << endl;
    }
    return 0;
}