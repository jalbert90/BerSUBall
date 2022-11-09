#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m, pairs = 0;

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

	vector<int>::iterator it;

	for (int i = 0; i < n; i++) {
		for (int j = -1; j <= 1; j++) {
			it = find(b.begin(), b.end(), a[i] + j);

			if (it != b.end()) {
				pairs++;
				b.erase(it);
				break;
			}
		}
	}

	cout << pairs;
}