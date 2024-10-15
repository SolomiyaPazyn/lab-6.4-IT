#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.4 IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64IT
{
	TEST_CLASS(UnitTest64IT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			TEST(ArrayTest, MaxFunction) {
				double arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
				EXPECT_EQ(Max(arr, 10), 10);
			}
		}
	};
}
