#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.4,it/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double Max(double mas[], int size);  

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMaxFunction)
		{
			double mas[] = { 1.5, -3.2, 7.4, 2.1, 5.6 };
			int size = sizeof(mas) / sizeof(mas[0]);

			double maxElement = Max(mas, size);

			Assert::AreEqual(7.4, maxElement);
		}
	};
}
