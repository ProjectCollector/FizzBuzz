#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i <= 100; i++) {
		if (i % 3 == 0) {
			cout << "Fizz" << endl;
		}
		if (i % 5 == 0) {
			cout << "Buzz" << endl;
		}
		else {
			cout << i << endl;
		}
	}
	system("PAUSE");
	return 0;
}