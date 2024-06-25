// Giai PTB2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void GiaiPTB2(float a, float b, float c)
{
	float x, delta;
	delta = b * b - 4 * a * c;
	if (a == 0)
	{
		if (b == 0) {
			if (c != 0) {
				cout << "Phuong trinh vo nghiem";
			}
			else {
				cout << "Phuong trinh vo so nghiem";
			}
			x = -c / b;
			cout << x << endl;

		}
	}
	else if (delta < 0)
	{
		cout << "Phuong trinh vo nghiem." << endl;
	}
	else if (delta == 0)
	{
		float x1, x2;
		x1 = x2 = -b / 2 * a;
		cout << "Phuong trinh co nghiep kep" << x1 << x2 << endl;
	}
	else
	{
		float x1;
		x1 = (-b + sqrt(delta)) / (2 * a);
		float x2;
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Phuong trinh co hai nghiem phan biet:" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

}
int main() {
	float a, b, c;
	cout << "Nhap he so a,b,c de giai phuong trinh bac 2 : ax^2 + bx = c = 0\n";
	cout << "Nhap a";
	cin >> a;
	cout << "Nhap b";
	cin >> b;
	cout << "Nhap c";
	cin >> c;
	GiaiPTB2(a, b, c);

	return 0;
}