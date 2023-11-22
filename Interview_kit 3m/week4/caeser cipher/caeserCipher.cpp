#include<bits/stdc++.h>
using namespace std;

string caesarCipher(string s, int k) {
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122){
            if(s[i]>=65 && s[i]<=90){
                k=k%26;
                s[i]+=k;
                if(s[i]>90){
                    s[i]-=26;
                }
            }
            else if(s[i]>=97 && s[i]<=122){
                k=k%26;
                s[i]-=26;
                s[i]+=k;
                if(s[i]+26 > 122){
                    s[i]-=26;
                }
                s[i]+=26;
            }

        }
        
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin,s);
    int k;
    cin >> k;

    string dec=caesarCipher(s,k);
    for(int i=0;i<dec.size();i++){
        cout << dec[i];
    }
}