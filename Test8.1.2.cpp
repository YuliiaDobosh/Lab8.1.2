#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab8.1.2\Lab8.1.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const char* str = "test while_while_";
			int count = Count(str, "while", 0, 0);
			Assert::AreEqual(2, count);
		}
	};
}
