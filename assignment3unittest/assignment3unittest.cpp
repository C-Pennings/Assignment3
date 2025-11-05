#include "pch.h"
#include "CppUnitTest.h"
#include "../Assignment3/main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace assignment3unittest
{
	TEST_CLASS(assignment3unittest)
	{
	public:
		
		TEST_METHOD(RockTest)
		{
			char input1[] = "rock";
			char input2[] = "rock";

			Assert::AreEqual("Draw", RockPaperScissors(input1, input2));

		}
		TEST_METHOD(PaperTest)
		{

		}
		TEST_METHOD(ScissorsTest)
		{

		}
		TEST_METHOD(IncorrectTest)
		{

		}
		TEST_METHOD(RockWins)
		{

		}
		TEST_METHOD(PaperWins)
		{

		}
		TEST_METHOD(ScissorsWins)
		{

		}
		
	};
}
