#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        string s,s2;
        cin >> s;
        s2=s2+s[0];
        s2=s2+s[1];
        for(int j=2;j<n;j++){
            if(s[j-1]=='a' || s[j-1]=='e'){
                if(s[j+1]=='b' || s[j+1]=='c' || s[j+1]=='d'){
                    s2=s2+s[j];
                }
                else{
                    s2=s2+".";
                    s2=s2+s[j];
                }
            }
            else{
                if(s[j+1]=='b' || s[j+1]=='c' || s[j+1]=='d'){
                    s2=s2+s[j];
                }
                else{
                    s2=s2+".";
                    s2=s2+s[j];
                }
            }
        }

        cout << s2 << endl;
    }
}