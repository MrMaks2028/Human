#include <iostream>
#include <string>
using namespace std;
class human {
public:
	void setAge(int a) {
		age = a;
	}
	void setWeigth(int b) {
		weigth = b;
	}
	void setName(string c) {
		name = c;
	}
	int getAge() {
		return age;
	}
	int getWeigth() {
		return weigth;
	}
	string getName() {
		return name;
	}
private:
	int age;
	int weigth;
	string name;
};
int main() {
	human student;
	student.setAge(25);
	student.setWeigth(50);
	student.setName("Maksim");
	cout << student.getAge() << endl;
	cout << student.getWeigth() << endl;
	cout << student.getName() << endl;
}