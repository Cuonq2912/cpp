#include<bits/stdc++.h>

using namespace std;

bool stn(long long n){
	if(n < 2){
		return 0;
	}
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	long long n; cin >> n;
	if(stn(n)){
		cout << "YES\n";
	}
	else cout << "NO\n";
}
