#include "Vector3D_Closed.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

Vector3D_Closed::Vector3D_Closed()
	: Vector3D_Base()
{}
Vector3D_Closed::Vector3D_Closed(double a, double b, double c)
	: Vector3D_Base(a, b, c)
{}
Vector3D_Closed::Vector3D_Closed(const Vector3D_Closed& s)
	: Vector3D_Base(s)
{}

Vector3D_Closed Vector3D_Closed::operator + (Vector3D_Closed r) {
	Vector3D_Closed t(0, 0, 0);
	t.SetX(this->GetX() + r.GetX());
	t.SetY(this->GetY() + r.GetY());
	t.SetZ(this->GetZ() + r.GetZ());
	return t;
}

Vector3D_Closed Vector3D_Closed::operator - (Vector3D_Closed r) {
	Vector3D_Closed t(0, 0, 0);
	t.SetX(this->GetX() - r.GetX());
	t.SetY(this->GetY() - r.GetY());
	t.SetZ(this->GetZ() - r.GetZ());
	return t;
}

double Vector3D_Closed::operator * (Vector3D_Closed r) {
	Vector3D_Closed t(0, 0, 0);
	t.SetX(this->GetX() * r.GetX());
	t.SetY(this->GetY() * r.GetY());
	t.SetZ(this->GetZ() * r.GetZ());
	return t.GetX() + t.GetY() + t.GetZ();
}

Vector3D_Closed& Vector3D_Closed::operator ++ ()
{
	double a = this->GetX();
	++a;
	this->SetX(a);
	return *this;
}
Vector3D_Closed& Vector3D_Closed::operator -- ()
{
	double a = this->GetX();
	--a;
	this->SetX(a);
	return *this;
}
Vector3D_Closed Vector3D_Closed::operator ++ (int)
{
	Vector3D_Closed t(*this);
	double a = t.GetX();
	a++;
	t.SetX(a);
	return t;
}
Vector3D_Closed Vector3D_Closed::operator -- (int)
{
	Vector3D_Closed t(*this);
	double a = t.GetX();
	a--;
	t.SetX(a);
	return t;
}

Vector3D_Closed::operator string() const {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream sout;
	sout << "вектор = (" << this->GetX() << " , " << this->GetY() << " , " << this->GetZ() << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, const Vector3D_Closed& a)
{
	out << (string)a;
	return out;
}
istream& operator >> (istream& in, Vector3D_Closed& a)
{
	double x, y, z;
	cout << "x = ? "; cin >> x;
	cout << "y = ? "; cin >> y;
	cout << "z = ? "; cin >> z;
	a.SetX(x);
	a.SetY(y);
	a.SetZ(z);
	return in;
}