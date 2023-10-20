#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t,x=0 ;
    cin >> t;

    string s;
    for(int i=0;i<t;i++){
        cin >> s;
        if(s[1]=='+'){
            x++;
        }
        else if(s[1]='-'){
            x--;
        }
    }
    cout << x << endl;
 }