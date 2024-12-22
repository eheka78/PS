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

	// input
	//1 <= n <= 100, 000
	int n;
	cin >> n;

	// process 
	int dp[100'001] = {};
	// 초기화
	for (int i{ 0 }; i <= n; i++) {
		dp[i] = i;
	}
	
	// 1부터 차례대로 항의 최고개수를 구합니다.
	for (int i{ 1 }; i <= n; i++) {
		for (int j{ 1 }; j * j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}

	// output
	cout << dp[n] << '\n';
	return 0;
}
