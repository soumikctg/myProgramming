#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    map<char,int> tHash;
    map<char, int> sHash;
    if(s.size()!=t.size()){
        return false;
    }
    else{
        for(int i=0;i<s.size();i++){
            tHash[t[i]]++;
            sHash[s[i]]++;
        }
        if(tHash==sHash){
            return true;
        }
        else{
            return false;
        }
    }

}


int main(){
    string s,t;
    getline(cin, s);
    getline(cin,t);
    cout << isAnagram(s,t) << endl;
}