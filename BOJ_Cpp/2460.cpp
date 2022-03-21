#include <iostream>

<<<<<<< HEAD
int main(){
    int passenger[10];

    
=======
using namespace std;

int main() {
    int num = 0;
    int max = 0;

    for (int i = 0; i < 10; i++){
        int plus, minus;
        cin >> minus >> plus;
        
        num -= minus;
        num += plus;

        if(max < num){
            max = num;
        }        
    }

    cout << max << endl;

    return 0;
>>>>>>> e0bb532887d79ecf1ee6759753e7037518a69ed4
}