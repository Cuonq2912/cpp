#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el '\n'
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define f first
#define s second
#define pb push_back
#define Faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(){
    Faster();
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    sort(a, a + n);
    sort(b, b + m);

    vector<int> hop, giao;
    int i =0, j = 0;
    
    while(i < n && j < m){
        if(a[i] == b[j]){
            hop.pb(a[i]);
            giao.pb(a[i]);
            ++i; ++j;
        }
        else if(a[i] < b[j]){
            hop.pb(a[i]);
            ++i;
        }
        else{
            hop.pb(b[j]);
            ++j;
        }
    }
    while(i < n){
        hop.pb(a[i]);
        ++i;
    }
    while(j < m){
        hop.pb(b[j]);
        ++j;
    }
    for(int x : giao) cout << x << " ";
    cout << el;
    for(int x : hop) cout << x << " ";
    return 0;
}