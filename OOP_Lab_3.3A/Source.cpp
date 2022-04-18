#include "Vector3D.h"
#include "Vector3D_Closed.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

int main() {
    Vector3D l;
    cin >> l;
    cout << l << endl;

    Vector3D r;
    cin >> r;
    cout << r << endl;

    Vector3D t;
    t = l + r;
    cout << "a + b = (" << t.GetX() << " , " << t.GetY() << " , " << t.GetZ() << ")" << endl;
    t = l - r;
    cout << "a - b = (" << t.GetX() << " , " << t.GetY() << " , " << t.GetZ() << ")" << endl;
    cout << "a * b = " << l * r << endl;

    Vector3D_Closed a;
    cin >> a;
    cout << a << endl;

    Vector3D_Closed b;
    cin >> b;
    cout << b << endl;

    Vector3D_Closed c;
    c = a + b;
    cout << "a + b = " << c << endl;
    c = a - b;
    cout << "a - b = " << c << endl;
    cout << "a * b = " << a * b << endl;

    return 0;
}