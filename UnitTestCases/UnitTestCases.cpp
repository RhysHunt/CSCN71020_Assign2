#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCases
{
	TEST_CLASS(UnitTestCases)
	{
	public:
		
		TEST_METHOD(GetPerimeterTest)
		{
			int result = 0;
			result = getPerimeter(5, 8);
			Assert::AreEqual(26, result);
		}
		TEST_METHOD(GetAreaTest)
		{
			int result = 0;
			result = getArea(5, 5);
			Assert::AreEqual(25, result);
		}
		TEST_METHOD(VoidSetLengthTests)
		{

		}
		TEST_METHOD(VoidSetWidthTests)
		{

		}
	};
}
