#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCases
{
	TEST_CLASS(UnitTestCases)
	{
	public:
		
		TEST_METHOD(GetPerimeterTest)
		{
			int result = 0, length = 5, width = 8;
			//Perimeter is 2*length + 2*width, should print 26
			result = getPerimeter(&length, &width);
			//tests if 26 and the result are equal
			Assert::AreEqual(26, result);
		}
		TEST_METHOD(GetAreaTest)
		{
			int result = 0, length = 4, width = 5;
			//Area is Length * width, should print 20
			result = getArea(&length, &width);
			//Tests if 20 and the result are equal
			Assert::AreEqual(20, result);
		}
		TEST_METHOD(SetLengthTests)
		{
			int input = 10, length = 1;
			//Should set the length to 10
			setLength(input, &length);
			//Tests if the input and the length are equal
			Assert::AreEqual(input, length);

			input = 100;
			//Should be incorrect, since 100 is out of bounds
			setLength(input, &length);
			//Tests if the two inputs are NOT equal
			Assert::AreNotEqual(input, length);

			input = -83618127;
			//Should be incorrect since input is very negative, meant simulate typing a very negative number 
			setLength(input, &length);
			//Tests if the two inputs are NOT equal
			Assert::AreNotEqual(input, length);
		}
		TEST_METHOD(SetWidthTests)
		{
			int input = 2, width = 1;
			//Should set the length to 10
			setWidth(input, &width);
			//Tests if the input and the length are equal
			Assert::AreEqual(input, width);

			input = 100;
			//Should be incorrect, since 100 is out of bounds
			setWidth(input, &width);
			//Tests if the two inputs are NOT equal
			Assert::AreNotEqual(input, width);

			input = -1;
			//Should be incorrect since input is very negative, meant simulate typing a very negative number 
			setWidth(input, &width);
			//Tests if the two inputs are NOT equal
			Assert::AreNotEqual(input, width);
		}
	};
}
