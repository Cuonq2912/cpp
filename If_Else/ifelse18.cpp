#include <bits/stdc++.h>

using namespace std;

int main () {
    int w; float h;
    cin >> w >> h;
    float bmi =1.0 * w / (pow(h, 2));
    if(bmi < 18.5) cout << "Under weight";
    else if(bmi < 25) cout << "Normal";
    else if(bmi < 30) cout << "Over weight";
    else if(bmi < 35) cout << "Obesity 1";
    else if(bmi < 40) cout << "Obesity 2";
    else cout << "WTF";
    return 0;
}