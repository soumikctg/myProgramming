#include <iostream>

using namespace std;

long long int gcd(long long int a, long int b){
    if(a%b == 0){
        return b;
    }
    return gcd(b, a%b);
}

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        long long int a, b;
        cin >> a >> b;
        long long int lcm = (a*b)/gcd(a,b);
        if(lcm == b){
            int y = b/a;
            int x = lcm*y;
            cout << x << endl;
        }
        else{
            cout << lcm << endl;
        }
        
    }
    

    return 0;
}