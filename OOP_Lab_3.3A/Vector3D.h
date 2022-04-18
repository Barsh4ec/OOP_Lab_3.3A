#pragma once
#include <string>
#include "Vector3D_Base.h"
using namespace std;

class Vector3D : public Vector3D_Base
{
private:
	
public:
	Vector3D();
	Vector3D(double, double, double);
	Vector3D(const Vector3D&);

	Vector3D operator + (Vector3D r);
	Vector3D operator - (Vector3D r);
	double operator * (Vector3D r);

	Vector3D& operator ++ ();
	Vector3D& operator -- ();
	Vector3D operator ++ (int);
	Vector3D operator -- (int);

};