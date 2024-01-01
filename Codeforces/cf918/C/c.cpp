#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int n;
        cin >> n;
        long long int count =0;
        long long int x;
        for(int j=0;j<n;j++){
            cin >> x;
            count=count+x;
        }
        long long int sq = sqrt(count);
        if(sq*sq == count){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}