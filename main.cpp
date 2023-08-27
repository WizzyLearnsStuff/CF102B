#include<iostream>

using namespace std;

int dsum(int n) {
	int ret = 0;
	while (n > 0) {
		ret += n % 10;
		n /= 10;
	}
	return ret;
}


int main() {
	int n = 0;

	char c;
	int r = 0;
	cin >> c;
	n = c - '0';
	while (cin >> c) {
		n += c - '0';
		r++;
	}
	r = r > 0;

	while (n > 9) {
		n = dsum(n);
		r++;
	}
	cout << r;
}
