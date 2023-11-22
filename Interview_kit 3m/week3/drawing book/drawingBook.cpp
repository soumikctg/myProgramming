#include<bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {
    int front=0,back=0;
    for (int i=2;i<=p;i=i+2){
        front++;
    }
    int m;
    if(n%2==0){
        m=n+1;
    }
    else{
        m=n;
    }
    for(int i=m-2;i>=p;i=i-2){
        back++;
    }

    if(front<back){
        return front;
    }
    else{
        return back;
    }
}

int main(){
    int n,p;
    cin >> n;
    cin >> p;
    cout << pageCount(n,p)<<endl;
}