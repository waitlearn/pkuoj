#include <iostream>
using namespace std;
int main(){
    int roct[10] = {0},z[10] = {1};
    int d,i;
    cin >> d;
    for (i = 0; d / 8 != 0; i++){
        roct[i] = d % 8;
        d = d / 8;
    }
    roct [i] = d;
    for (i = 9; i >=0; i--)
        if(roct[i] != 0)
            cout << roct[i];
    cout << endl;
    return 0;
}
