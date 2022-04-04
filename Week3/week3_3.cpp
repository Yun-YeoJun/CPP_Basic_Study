#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;
	int result = 0;
	int i;
	for (i = 1; i <= n; i++) {
		result += i;
	}
	
	cout << result << endl;

	return 0;
}
