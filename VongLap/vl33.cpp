#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i + j == n + 1){
                cout << i << ' ';
            }
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}