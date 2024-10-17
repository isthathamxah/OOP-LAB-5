#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "***Static Variables***" << endl;
	static int sum=0;
	cout << "\nEnter 5 numbers to be summed " << endl;
	for (int i = 1; i <= 5; i++) {
		int n;
		cout << "\nEnter " << i << " number : " ;
		cin >> n;
		sum += n;
		cout << "The current total is : " << sum << endl;
	}
	cout << "\nProgram Completed\n";
}
