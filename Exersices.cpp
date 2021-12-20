#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	int n;
	long long max = 1 << 63;
	cin >> n;
	int l = -1, r = n + 1;
	set <pair <long long, vector <int>>> count;
	vector <int> v(n + 1);
	vector <long long> prev(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> v[i];
		prev[i] = prev[i - 1] + v[i];
		auto f = find(count.begin(), count.end(), v[i]);
		if (f == count.end()) {
			count.insert(make_pair(v[i], vector <int> { i }));
		} else {
			f.second.push_back(i);
		}
	}

	

	return 0;
}