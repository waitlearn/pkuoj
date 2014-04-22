#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int todec(const char* a,int b){
    long total = 0;
    int x = strlen(a);
    for (int i = 0; i < x; i++){
        if ((a[i] - '0') > b)
            return -1;
        total += ((a[i] - '0') * pow(b, (x-i-1)));
    }
    return total;
}

int main(){
    int nCases;
    cin >> nCases;
    cin.get();
    for ( int i = 0; i < nCases; i++){
        int flag = 0;
        char p[8],q[8],r[8];
        cin.getline(p,8,' ');
        cin.getline(q,8,' ');
        cin.getline(r,8,'\n');
        long pDec,qDec,rDec;
        for (int b = 2; b <= 13; b++){
            pDec = todec(p,b);
            qDec = todec(q,b);
            rDec = todec(r,b);
            if (pDec == -1 || qDec == -1 || rDec == -1)
                continue;
            if (pDec * qDec == rDec){
                flag = b;
                break;
            }

        }
        cout << flag << endl;
    }
    return 0;
}
