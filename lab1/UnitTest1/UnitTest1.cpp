#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1/lab1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			float a = 100, b = 5;
			float sum = a + b;
			Assert::AreEqual(sum, Sum(a, b));
		}

		TEST_METHOD(TestMethod2)
		{
			float a = 14, b = 12;
			float sub = a - b;
			Assert::AreEqual(sub, Subtraction(a, b));
		}

		TEST_METHOD(TestMethod3)
		{
			float a = 10, b = 5;
			float multipl = a * b;
			Assert::AreEqual(multipl, Multiplication(a, b));
		}

		TEST_METHOD(TestMethod4)
		{
			float a = 48, b = 8;
			float div = a / b;
			Assert::AreEqual(div, Division(a, b));
		}
	};
}
