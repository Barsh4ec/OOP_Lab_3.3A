#include "Vector3D_Base.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

Vector3D_Base::Vector3D_Base() {
	x = 0;
	y = 0;
	z = 0;
}
Vector3D_Base::Vector3D_Base(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}
Vector3D_Base::Vector3D_Base(const Vector3D_Base& r)
{
	x = r.x;
	y = r.y;
	z = r.z;
}
Vector3D_Base::~Vector3D_Base() {
	x, y, z;
}

Vector3D_Base::operator string() const {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream sout;
	sout << "вектор = (" << x << " , " << y << " , " << z << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, const Vector3D_Base& a)
{
	out << (string)a;
	return out;
}
istream& operator >> (istream& in, Vector3D_Base& a)
{
	cout << "x = ? "; in >> a.x;
	cout << "y = ? "; in >> a.y;
	cout << "z = ? "; in >> a.z;
	return in;
}