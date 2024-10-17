#include<iostream>
#include<string>
using namespace std;

class Alpha {
public:
	static int total;
	int id=0;

	Alpha() {
		total++;
		id = total;
	}
	static void Total() {
		cout << "Total : " << total << endl;
	}
	void show_id() {
		 cout << "ID of Object " <<id << " : " << id << endl;
	}
};

int Alpha::total = 0;

int main() {
	Alpha a1;
	cout << "After creating one object ,value of total " << endl;
	Alpha::Total();
	Alpha a2, a3;
	cout << "After creating multiple objects, value of total  " << endl;
	Alpha::Total();
	cout << "*************************************************" << endl;
	a1.show_id();
	a2.show_id();
	a3.show_id();
	return 0;
}
