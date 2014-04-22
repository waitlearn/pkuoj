#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
char kmap[] = "22233344455566677778889999";
char str[20];
char tel[500][9];
void stand(int n){
    int j = 0;
    for (int i = 0; str[i] != '\n'; i++){
        cout << i << endl;
        if(str[i] == '-') continue;
        if(str[i] >= 'A' && str[i] <= 'Z'){
            tel[n][j] = kmap[str[i] - 'A'];
            j++;
        }
        else{
            tel[n][j] = str[i];
            j++;
        }
    }
    tel[n][j] = '\0';
    cout << tel[n] << endl;
    return;
}

int main(){
    cin.getline(str,20,'\n');
    stand (0);
    cout << "stand has fineshed" << endl;

    return 0;
}
