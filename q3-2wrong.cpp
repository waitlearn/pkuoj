#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
    char oct[10];
    int dec,len;
    cin.getline(oct,10,'\n');
    len = strlen(oct);
    for (int i = 0; i < len; i++){
        dec *= 8;
        dec += oct[i]-'0';
    }
    cout << dec << endl;
}
