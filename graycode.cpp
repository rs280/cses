#include <iostream>
#include <vector>

using namespace std;

using vc = vector<char>;
using vvc = vector<vc>;

void solve(int n, int pow, vvc& codes, int r, int c) {
	if (1 == n) {
		codes[r][c] = '0';
		codes[r + 1][c] = '1';
		return;
	}

	const auto& p2 = pow / 2;
	solve(n - 1, p2, codes, r, c + 1);
	for (int i = 0; i < p2; ++i) {
		codes[p2 + i] = codes[p2 - i - 1];

		codes[i][c] = '0';
		codes[p2 + i][c] = '1';
	}
}

int main() {
	

	int n;
	cin >> n;

	const auto& pow = 1 << n;
	auto codes = vvc(pow, vc(n));

	solve(n, pow, codes, 0, 0);

	for (int i = 0; i < pow; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << codes[i][j];
		}

		cout << '\n';
	}

	return 0;
}