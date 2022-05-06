#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto b = int{ 0 };
	auto ans = int{ 0 };
	for (int i = 0; i < 8; ++i) {
		string l;
		cin >> l;

		for (int j = b; j < 8; j += 2) {
			if ('F' == l[j]) {
				++ans;
			}
		}

		b = 0 == b ? 1 : 0;
	}

	cout << ans;
		
	return 0;
}