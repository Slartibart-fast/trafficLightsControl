#include "stdafx.h"
#include "CppUnitTest.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
class Name {
private:
	std::string name;
public: 
	Name(std::string name) {
		this->name = name;
	}
	std::string getName() {
		return name;
	}
};

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(successfulTest)
		{
			std::string name = "Bill";
			Name n(name);
			Assert::AreEqual(name, n.getName());
		}
		TEST_METHOD(unsuccessfulTest)
		{
			int x = 2;
			Assert::AreNotEqual(x, 2);
		}

	};
}