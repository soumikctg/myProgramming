#include<bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
	int n = arr.size();
	int pos = 0;
	int neg = 0;
	int zer = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			pos++;
		}
		else if(arr[i]<0) {
			neg++;
		}
		else {
			zer++;
		}
	}
	float pFrac = (pos*1.0) / n;
	float nFrac = (neg*1.0) / n;
	float zFrac = (zer*1.0) / n;

	cout << setprecision(6) << pFrac << endl;
	cout << setprecision(6) << nFrac << endl;
	cout << setprecision(6) << zFrac << endl;
}

int main() {
	vector<int> arr;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	plusMinus(arr);
}