#include<iostream>
#include<string>
using namespace std;

class Box {
private:
	float length;
	float width;
	float height;
	static int objectCount;

public:
	Box() {
		objectCount++;
		cout << "\nContructor Called ";
	}
	static void objectcount() {
		cout << "\nTotal Number of Objects : " << objectCount;
	}
};
int Box::objectCount = 0;
 int main() {
	 Box a, b, c;
	 Box::objectcount();
	 return 0;
}
