#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool dx(int a[], int n){
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n - i- 1]) return 0;
    } return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(dx(a, n)){
        cout << "Yes\n";
    }
    else cout << "No\n";
}