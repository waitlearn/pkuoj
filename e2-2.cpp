#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int nCases;
    cin >> nCases;
    cin.get();
    for ( int i = 0; i < nCases; i++){
        char s[10];                         // has to be larger than s[5] otherwise will be error!
        cin.getline(s,6,'\n');              // to record the positons in a stirng and calculate directly from string
        int x = abs(s[0] - s[3]);
        int y = abs(s[1] - s[4]);
        int a = abs(x - y);
        if (x == 0 && y == 0)
            {
            cout << "0 0 0 0" <<endl;
            continue;}
        if (x >= y) cout << x << " ";       // output of king
        else cout << y << " ";
        if (x == 0 || y == 0 || x == y) cout << "1 "; // output of queen
        else cout << "2 ";
        if (x == 0 || y == 0) cout <<"1 "; // output of car
        else cout << "2 ";
        if (a % 2 != 0) cout << "Inf" << endl;
        else if ( x == y) cout << "1" << endl;
        else cout << "2" << endl;
    }
    return 0;



}
