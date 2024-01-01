#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ab;
        cin >> ab;
        int s = ab.size();

        if (ab[0] == '0') {
            cout << -1 << endl;
        } else {
            int x = stoi(ab);
            int a = 1;
            bool valid_pair_found = false;

            for (int j = 1; j < s; j++) {
                int p = x / a;
                int q = x % a;

                if (p > 0 && q > 0 && q > p) {
                    if (ab[j] == '0') {
                        continue;
                    }
                    cout << p << " " << q << endl;
                    valid_pair_found = true;
                    break;
                }

                a *= 10;
            }

            if (!valid_pair_found) {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
