#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k;
        cin >> n >>k;
        int product=1;
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            product=product*x;
        }
        int a=2023/product;
        if(a*product == 2023){
            cout << "YES" << endl;
            cout << a ;
            for(int j=0;j<k-1;j++){
                cout << " " << 1 ;
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}