#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int nCases;
    cin >> nCases;
    cin.get();
    while(nCases-- ){
        char str[1001];
        int a[26] = {0},Max = 0;
        cin.getline(str,1001,'\n');
        int len = strlen(str);
        for (int i = 0; i < len; i++)
            a[str[i]-'a']++;
        for (int i = 0; i < 26; i++)
            if(a[i] > a[Max])
                Max = i;
        cout << str[Max] << " " << a[Max] << endl;

    }
    return 0;
}
