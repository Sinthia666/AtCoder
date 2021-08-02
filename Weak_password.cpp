#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int a = s[0]-'0';
    int b = s[1]-'0';
    int c = s[2]-'0';
    int d = s[3]-'0';
    if(a==b and a==c and a==d)cout << "Weak"<<endl;
    else{
        int ans = 0;
        if(b==0){
            if(a!=9)ans=1;
        }
        else{
            if(a!=b-1)ans=1;
        }


        if(c==0){
            if(b!=9)ans=1;
        }
        else{
            if(b!=c-1)ans=1;
        }


        if(d==0){
            if(c!=9)ans=1;
        }
        else{
            if(c!=d-1)ans=1;
        }
        if(ans==1)cout<<"Strong" << endl;
        else cout << "Weak" << endl;

    }
    }