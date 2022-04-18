#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

Vector3D::Vector3D()
	: Vector3D_Base()
{}
Vector3D::Vector3D(double a, double b, double c)
	: Vector3D_Base(a, b, c)
{}
Vector3D::Vector3D(const Vector3D& s)
	: Vector3D_Base(s)
{}

Vector3D Vector3D::operator + (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.SetX(this->GetX() + r.GetX());
	t.SetY(this->GetY() + r.GetY());
	t.SetZ(this->GetZ() + r.GetZ());
	return t;
}

Vector3D Vector3D::operator - (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.SetX(this->GetX() - r.GetX());
	t.SetY(this->GetY() - r.GetY());
	t.SetZ(this->GetZ() - r.GetZ());
	return t;
}

double Vector3D::operator * (Vector3D r) {
	Vector3D t(0, 0, 0);
	t.SetX(this->GetX() * r.GetX());
	t.SetY(this->GetY() * r.GetY());
	t.SetZ(this->GetZ() * r.GetZ());
	return t.GetX() + t.GetY() + t.GetZ();
}

Vector3D& Vector3D::operator ++ ()
{
	double a = this->GetX();
	++a;
	this->SetX(a);
	return *this;
}
Vector3D& Vector3D::operator -- ()
{
	double a = this->GetX();
	--a;
	this->SetX(a);
	return *this;
}
Vector3D Vector3D::operator ++ (int)
{
	Vector3D t(*this);
	double a = t.GetX();
	a++;
	t.SetX(a);
	return t;
}
Vector3D Vector3D::operator -- (int)
{
	Vector3D t(*this);
	double a = t.GetX();
	a--;
	t.SetX(a);
	return t;
}