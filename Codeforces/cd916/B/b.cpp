#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k;
        cin >> n >> k;
        int a=n-k;
        int b=a+1;
        for(int i=a;i>0;i--){
            cout << i << " ";
        }
        for(int i=b;i<=n;i++){
            cout << i << " ";
        }

    }
}