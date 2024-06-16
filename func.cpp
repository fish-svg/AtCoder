#include <iostream>
#include <vector>
#include <algorithm>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<string>
#include<utility>
#include<tuple>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;

constexpr int INF = 1 << 30;
typedef long long ll;
//double M_PI = 3.1415926535897932384626433832795;
// std::cout << std::setprecision(20) << std::fixed << ans << std::endl;

// 最大公約数
long long gcd(long long a, long long b) {
	while (a > 0 && b > 0) {
		if (a > b) a = a % b;
		else b = b % a;
	}
	return max(a, b);
}

// 最小公倍数
long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

// 桁数を返す
ll digit(ll num) {
	ll digit_num = 0;
	while (num > 0) {
		digit_num += 1;
		num /= 10;
	}
	return digit_num;
}

// 素数どうか判定 素数ならtrueを返す
bool isPrime(int x) {
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

// 回文ならtrueを返す
bool kaibun(string s) {
	bool flag = true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[s.length() - i - 1]) flag = false;
	}
	return flag;
}

// 順列全探索
//string S;
//int K;
//cin >> S >> K;
//vector<string> cands;
//sort(S.begin(), S.end());
//do {
//	cands.push_back(S);
//} while (next_permutation(S.begin(), S.end()));
//cout << cands[K - 1] << endl;

int main() {
	int N, K;
	cin >> N >> K;
	vector<char> D(K + 10);
	for (int i = 1; i <= K; i++) {
		cin >> D[i];
	}

	int ans;
	while (true) {
		bool flag = true;
		string ss = to_string(N);
		for (int i = 1; i <= K; i++) {
			for (int j = 0; j < ss.size(); j++) {
				if (ss[j] == D[i]) flag = false;
			}
		}

		if (flag) {
			ans = N;
			break;
		}
		N += 1;
	}
	cout << ans << endl;
}