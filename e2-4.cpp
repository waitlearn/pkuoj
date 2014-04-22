#include <iostream>
using namespace std;
int main(){
    int m,n,p;
    int cnt[26] = {0};
    char s;
    cin >> m >> n >> p;
    cin.get();
    for (int i = 0; i < n; i++){
        char str1[11];
        cin.getline(str1,11,'\n');
        for (int k = 0; str1[k] != '\0'; k++)
                cnt[str1[k]-'A']++;
    }
    for (int i = 0; i < p; i++){
        char str2[101];
        cin.getline(str2,101,'\n');
        for (int j = 0; str2[j] != '\0'; j++)
            cnt[str2[j]-'A']--;
    }
    for (int i = 0; i < 26; i++){
	for (int j = 0; j < cnt[i]; j++){
	    s = i + 'A';
	    cout << s;
	}
    }
    cout << endl;
    return 0;
}
