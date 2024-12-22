// https://www.acmicpc.net/problem/1699
// 1699 - 제곱수의 합

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	// saving time
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//input
	int n;
	cin >> n;

	//process
	int cnt_max{ 0 }, cnt{ 0 };
	while (true) {
		if (n == 0) { break; }

		int temp = pow(static_cast<int>(sqrt(n)), 2);
		//cout << static_cast<int>(sqrt(n)) << ": " << temp << "\t";
		n -= temp;
		cnt++;
	}
	//cout << '\n';

	//output
	cout << cnt << '\n';
}
