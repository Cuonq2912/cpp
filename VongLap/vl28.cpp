#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int t; cin >> t;
        if(t % 2 == 0){
            cout << "EVEN\n";
        }
        else{
            cout << "ODD\n";
        }
    } cout << endl;
    return 0;
}