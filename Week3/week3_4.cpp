#include <iostream>

using namespace std;

int main() {
	int a, b;
	char c;

	cin >> a >> c >> b;

	switch (c) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	default:
		cout << "잘못 입력했습니다." << endl;
		break;
	}

	return 0;
}
