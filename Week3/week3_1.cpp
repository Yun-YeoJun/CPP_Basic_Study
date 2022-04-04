#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a > b) {
		cout << a << endl;
	}
	else if (a < b) {
		cout << b << endl;
	}
	else {
		cout << "두 수의 크기가 같습니다." << endl;
	}

	return 0;
}
