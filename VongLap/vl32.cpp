#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int st= n, ed = n;
    for(int i = 1; i <= 2 * n - 1; i++){
        for(int j = 1; j < st; j++) cout << "  ";
        for(int j = st; j <= ed; j++) cout << "* ";
        cout << "\n";
        if(i < n){
            st--; ed++;
        }else{
            st++; ed--;
        }
    }
    return 0;
}