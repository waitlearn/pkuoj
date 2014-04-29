#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;
char kmap[] = "22233344455566677778889999";
char str[20];
char tel[500][9];
void stand(int n){                                   //this function is to convert character based # to number string
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++){
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
    return;
}

int main(){
    int n;
    bool noduplicate = true;
    int cnt[500] = {0};
    cin >> n;
    cin.get();
    for (int i = 0; i < n; i++){
        cin.getline(str,20,'\n');
        stand(i);
        for (int j = 0; j < i; j++){
            if (strcmp(tel[i],tel[j]) == 0){
                noduplicate = false;
                cnt[j]++;
                break;
            }
        }
    }
    if (noduplicate == true){
        cout << "No duplicates." << endl;
        return 0;
    }
    else{
        for (int i = 0; i < n; i++){
            if (cnt[i] > 0){
              cout << tel[i] << " " << cnt[i] + 1 << endl;
            }
        }
        return 0;
    }

}
