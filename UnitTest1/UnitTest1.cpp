#include "pch.h"
#include "CppUnitTest.h"
#include "..\\lab6.3.rec\lab.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 9;
			int arr[size] = { 0 };  

			fillArray(arr, size);

			for (int i = 0; i < size; ++i)
			{
				Assert::AreEqual(i + 1, arr[i]);
			}
		}
	};
}
