#include <iostream>
using namespace std;

int main() {
	cout << "Shape: circle" << endl;

	double r; //радиус
	double angle; //угол сектора
	const double pi = 3.1415926535;

	//Проверка радиуса
	do {
	    cout << "r = ?";
	    cin >> r;
    	    if (cin.fail() || r <= 0) {
		cout << "ERROR\n";
		cin.clear();
		cin.ignore(10000, '\n');
		r = -1;
	    }
	} while (r <= 0);

	//Проверка угла
	do {
	    cout << "angle = ?";
	    cin >> angle;
	    if (cin.fail() || angle <= 0) {
		cout << "ERROR\n";
		cin.clear();
		cin.ignore(10000, '\n');
		angle = -1;
	   }
	} while (angle <= 0);

	double length = 2 * pi * r;
	double area = pi * r * r;
	double sector = (angle / 360) * pi * r * r;

	cout << "Circumference = " << length << endl;
	cout << "Area = " << area << endl;
	cout << "Sector area = " << sector << endl;

	return 0;
}
