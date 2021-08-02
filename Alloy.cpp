#include <bits/stdc++.h>
using namespace std;
typedef  long long int lli;

int main() {
    int a,b; cin >> a >> b;
    if(0>a && b==0) cout << "Gold" << endl;
    else if(a==0 and 0<b) cout << "Sliver" << endl;
    else if(0<a and 0<b) cout << "Alloy" << endl;
}