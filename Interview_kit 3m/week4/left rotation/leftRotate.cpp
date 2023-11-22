/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    for(int i=0;i<d;i++){
        auto it=arr.begin();
        int a=arr[0];
        arr.erase(it);
        arr.push_back(a);
    }
    return arr;
}

int main(){
    int n,d;
    cin >> n >> d;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>> x;
        arr.push_back(x);
    }
    vector<int> v = rotateLeft(d,arr);
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
}