#pragma once
#include <string>
#include "Vector3D_Base.h"
using namespace std;

class Vector3D_Closed : private Vector3D_Base
{
private:

public:
	Vector3D_Closed();
	Vector3D_Closed(double, double, double);
	Vector3D_Closed(const Vector3D_Closed&);

	Vector3D_Closed operator + (Vector3D_Closed r);
	Vector3D_Closed operator - (Vector3D_Closed r);
	double operator * (Vector3D_Closed r);

	Vector3D_Closed& operator ++ ();
	Vector3D_Closed& operator -- ();
	Vector3D_Closed operator ++ (int);
	Vector3D_Closed operator -- (int);

	friend ostream& operator << (ostream&, const Vector3D_Closed&);
	friend istream& operator >> (istream&, Vector3D_Closed&);

	operator string() const;
};