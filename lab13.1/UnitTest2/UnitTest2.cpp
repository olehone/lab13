#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"
#include "../Header.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int er = Er(1, 5);
			Assert::AreEqual(er, 1);
		}
	};
}
