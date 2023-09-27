#include<bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr) {
	sort(arr.begin(), arr.end());
	long int maxSum = 0;
	long int minSum = 0;
	for (int i = 1; i < 5; i++) {
		maxSum += arr[i];
	}

	for (int i = 0; i < 4; i++) {
		minSum += arr[i];
	}
	cout << minSum << " " << maxSum << endl;
}

int main() {
	vector<int> arr;
	for (int i = 0; i < 5; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	miniMaxSum(arr);
}