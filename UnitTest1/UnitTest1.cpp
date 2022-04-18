#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_3.3A/Vector3D_Base.cpp"
#include "../OOP_Lab_3.3A/Vector3D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D l(12,43,-23);
			Vector3D r(-23, 43, -4);
			double t = l * r;
			Assert::AreEqual(1665., t);
		}
	};
}
