#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 1; i < n - 1; i++){
		if(a[i] > a[i - 1] && a[i] > a[i + 1]){
			cout << a[i] << ' ';
		}
	}
	
}