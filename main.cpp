#include <iostream>
using namespace std;
int main() {
	cout << "Figure: trapezoid darya" << endl;
	int a, b, c, d, h;

   	do {
		cout << "a= ";
		cin >> a;
		if (a<=0) {
			cout << "error\n";
		}
	} while (a<=0);

	do {
		cout << "b= ";
		cin >> b;
		if (b<=0) {
			cout << "error\n";
		}
	} while (b<=0);

	do {
		cout << "c= ";
		cin >> c;
		if (c<=0) {
			cout << "error\n";
		}
	} while (c<=0);

	do {
		cout << "d= ";
		cin >> d;
		if (d<=0) {
			cout << "error\n";
		}
	} while (d<=0);

	do {
		cout << "h= ";
		cin >> h;
		if (h<=0) {
			cout << "error\n";
		}
	} while (h<=0);

	int P = a+b+c+d;
	double S = (a+b) / 2.0 * h;
	double M = (a+b) / 2.0;

	cout<<"Perimetr= " << P << endl;
	cout<<"Area= " << S << endl;
	cout << "Midline= " << M << endl;

	return 0;
}
 
