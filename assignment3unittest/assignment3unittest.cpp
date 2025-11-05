#include "pch.h"
#include "CppUnitTest.h"
#include "../Assignment3/main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace assignment3unittest
{
	TEST_CLASS(assignment3unittest)
	{
	public:
		
		TEST_METHOD(RockDrawTest)
		{
			char input1[] = "rock";
			char input2[] = "rock";

			Assert::AreEqual("Draw", RockPaperScissors(input1, input2));

		}
		TEST_METHOD(PaperDrawTest)
		{
			char input1[] = "paper";
			char input2[] = "paper";

			Assert::AreEqual("Draw", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(ScissorsDrawTest)
		{
			char input1[] = "scissors";
			char input2[] = "scissors";

			Assert::AreEqual("Draw", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(P1IncorrectTest)
		{
			char input1[] = "gun";
			char input2[] = "paper";

			Assert::AreEqual("Invalid", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(P2IncorrectTest)
		{
			char input1[] = "rock";
			char input2[] = "bomb";

			Assert::AreEqual("Invalid", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(AllIncorrectTest)
		{
			char input1[] = "gun";
			char input2[] = "bomb";

			Assert::AreEqual("Invalid", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(RockWinsP1)
		{
			char input1[] = "rock";
			char input2[] = "scissors";

			Assert::AreEqual("Player1", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(PaperWinsP1)
		{
			char input1[] = "paper";
			char input2[] = "rock";

			Assert::AreEqual("Player1", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(ScissorsWinsP1)
		{
			char input1[] = "scissors";
			char input2[] = "paper";

			Assert::AreEqual("Player1", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(RockWinsP2)
		{
			char input1[] = "scissors";
			char input2[] = "rock";

			Assert::AreEqual("Player2", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(PaperWinsP2)
		{
			char input1[] = "rock";
			char input2[] = "paper";

			Assert::AreEqual("Player2", RockPaperScissors(input1, input2));
		}
		TEST_METHOD(ScissorsWinsP2)
		{
			char input1[] = "paper";
			char input2[] = "scissors";

			Assert::AreEqual("Player2", RockPaperScissors(input1, input2));
		}
	};
}
