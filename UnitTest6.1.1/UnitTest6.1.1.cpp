#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b;
			const int n = 5;
			int t[n] = { 1,2,3,4,5 };
			b = Sum(t, n);
			Assert::AreEqual(b, 15);
		}
	};
}
