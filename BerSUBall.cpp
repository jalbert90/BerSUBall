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

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	vector<int>::iterator it;
	int pos, d;

	for (int i = 0; i < n; i++) {
		it = b.begin();

		while (it != b.end()) {
			pos = it - b.begin();
			d = abs(a[i] - b[pos]);

			if (d <= 1) {
				pairs++;
				b.erase(it);
				break;
			}

			it++;
		}
	}

	cout << pairs;
}