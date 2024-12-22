// https://www.acmicpc.net/problem/1080
// 1080 - 행렬

#include <iostream>
#include <vector>
using namespace std;

// 전역 변수수
vector<vector<char>> start;
vector<vector<char>> result;
vector<char> temp;

int main() {
	// saving time
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//input
	int n, m;
	cin >> n >> m;

	string a;
	for (int i{ 0 }; i < n; i++) {
		start.push_back(temp);
		cin >> a;

		for (int j{ 0 }; j < m; j++) {
			start[i].push_back(a[j]);
		}
	}

	for (int i{ 0 }; i < n; i++) {
		result.push_back(temp);
		cin >> a;

		for (int j{ 0 }; j < m; j++) {
			result[i].push_back(a[j]);
		}
	}

	// process
	// (0, 0)부터 차례대로 오른쪽으로 이동하고 끝까지 갔으면 (1, 0)으로 이동한다.
	// 해당 좌표가 result와 같으면 넘어가고 아니면 3x3만큼 반전시킨 뒤에 그 다음 좌표로 넘어간다.
	int cnt{ 0 };
	for (int i{ 0 }; i < n - 2; i++) {
		for (int j{ 0 }; j < m - 2; j++) {
			if (start[i][j] != result[i][j]) {
				for (int k{ i }; k < i + 3; k++) {
					for (int l{ j }; l < j + 3; l++) {
						if (start[k][l] == '0') {
							start[k][l] = '1';
						}
						else {
							start[k][l] = '0';
						}
					}
				}
				cnt++;
			}		
		}
	}

	// output
	if (start == result) {
		cout << cnt << '\n';
		return 0;
	}
	cout << -1 << '\n';
	return 0;
}
