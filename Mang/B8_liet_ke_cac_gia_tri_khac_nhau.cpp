#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        bool seen_before = false;
        for(int j = 0; j < i; j++){
            if(a[j] == a[i]){
                seen_before = true;
                break;
            }
        }
        if(!seen_before){
            cout << a[i] << ' ';
        }
    }
    return 0;
}
