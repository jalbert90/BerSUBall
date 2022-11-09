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
	int pos;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) pos = 0;
			else if (j == 1) pos = -1;
			else pos = 1;

			it = find(b.begin(), b.end(), a[i] + pos);

			if (it != b.end()) {
				pairs++;
				b.erase(it);
				break;
			}
		}
	}

	cout << pairs;
}