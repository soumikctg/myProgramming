#include<bits/stdc++.h>
using namespace std;

int marseExploration(string s){
    vector<int> hash(2,0);
    int n=s.size();
    int i=1,j=2;
    while(i<n){
        if(s[i]=='O'){
            hash[1]++;
        }
        i=i+3;
    }
    if(s[0]=='S'){
        hash[0]++;
    }
    
    while(j<n){
        if(s[j]=='S'){
            hash[0]++;
        }
        j++;
        if(s[j]=='S'){
            hash[0]++;
        }
        j=j+2;
    }


    int o1=(s.size()/3)-hash[1];
    int s1=((s.size()/3)*2)-hash[0];

    return s1+o1;

}

int main(){
    string s;
    getline(cin, s);
    cout << marseExploration(s) << endl;
}