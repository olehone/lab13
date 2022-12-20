#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"
#include "../Header.h"
#include "../dod.cpp"
#include "../sum.cpp"
#include "../var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{  
			Assert::AreEqual(Er(1, 5), 1);
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::
		}
	};
}
