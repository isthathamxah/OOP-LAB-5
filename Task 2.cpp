#include<iostream>
#include<string>
using namespace std;

int main() {
	static int f_term = 0, sec_term = 1, next_term;
	int n;
	cout << "Enter the number of items to print : " ;
	while (true) {
		cin >> n;
		if (n < 0) {
			cout << "Please enter a positive integer !!!" << endl;
		}
		if (n > 0) {
			break;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			cout << f_term << " ";
		}
		else if (i == 2) {
			cout << sec_term << " ";
		}
		else {
			next_term = f_term + sec_term;
			f_term = sec_term;
			sec_term = next_term;

			cout << next_term << " ";
		}
	}
}
