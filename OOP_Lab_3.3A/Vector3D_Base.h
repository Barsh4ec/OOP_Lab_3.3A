#pragma once
#include <string>
using namespace std;

class Vector3D_Base
{
private:
	double x, y, z;
public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	double GetZ() const { return z; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	void SetZ(double value) { z = value; }

	Vector3D_Base();
	Vector3D_Base(double, double, double);
	Vector3D_Base(const Vector3D_Base&);
	~Vector3D_Base();

	friend ostream& operator << (ostream&, const Vector3D_Base&);
	friend istream& operator >> (istream&, Vector3D_Base&);

	operator string() const;
};