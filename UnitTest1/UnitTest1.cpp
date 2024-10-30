#include <pch.h>
#include "CppUnitTest.h"
#include "../AP_Lab№8.2/AP_Lab№8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace WordCounterTests
{
    TEST_CLASS(WordCounterTests)
    {
    public:
        TEST_METHOD(TestMultipleSpaces)
        {
            string input = "One   two     three";
            size_t result = CountWords(input);
            Assert::AreEqual(size_t(3), result);
        }
    };
}
