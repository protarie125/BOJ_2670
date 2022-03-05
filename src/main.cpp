#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

using vd = vector<double>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto accum = vd(n);
	auto mx = double{ -1 };
	for (int i = 0; i < n; ++i) {
		cin >> accum[i];

		if (0 == i) {
			continue;
		}

		if (1 < accum[i - 1]) {
			accum[i] *= accum[i - 1];
		}

		if (mx < accum[i]) {
			mx = accum[i];
		}
	}

	cout << fixed << setprecision(3) << mx;

	return 0;
}