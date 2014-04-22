#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int dec,oct;
    int index = 0;
    int tmp;
    cin >> oct;
    while (oct > 0){
        tmp = oct %10;
        oct /= 10;
        dec += tmp * pow (8, index++);
    }
    cout << dec << endl;
    return 0;
}
