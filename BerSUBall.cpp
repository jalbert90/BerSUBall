#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m;

	vector<int> a, b;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		a.push_back(input);
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		int input;
		cin >> input;
		b.push_back(input);
	}


}