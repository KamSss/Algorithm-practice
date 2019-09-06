#include<iostream>

using namespace std;

int main() {
	int m, s, t;
	while (cin >> m >> s >> t) {
		int ret = 0;
		int min = m;
		int tin = t;
		while (tin != 0) {
			if ((min - 10) >= 0) {
				min -= 10;
				ret += 50;
				tin--;
			}
			else if (min + 4 >= 10 && tin >= 1) {
				min += 4;
				tin--;
			}
			else if (min + 8 >= 10 && tin >= 2) {
				min += 4;
				tin--;
			}
			else {
				ret += 13;
				tin--;
			}
			if (ret >= s) {
				break;
			}
		}
		if (ret >= s) {
			cout << "Yes" << endl;
			cout << t - tin << endl;
		}
		else {
			cout << "No" << endl;
			cout << ret << endl;
		}
	}
	return 0;
}