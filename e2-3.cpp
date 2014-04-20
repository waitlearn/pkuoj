#include <iostream>
using namespace std;
int main(){
    int tree[10001] = {0};
    int l,m,total = 0;
    cin >> l >> m;
    for (int i = 0; i <= l; i++){
        tree[i] = 1;
        }
    for (int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        for (int j = a; j <= b; j++){
            tree[j] = 0;
            }
        }
    for (int i = 0; i <= l; i++){
        total += tree[i];
        }
    cout << total << endl;
    return 0;
}
