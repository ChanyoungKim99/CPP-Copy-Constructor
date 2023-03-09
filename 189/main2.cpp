#include <iostream>

class MyClass
{
private:
	int nValue;

public:
	int mValue;

	void Print()
	{
		std::cout << nValue << std::endl;
	}
};


int main()
{
	MyClass c1{ 1 };
	std::cout << c1.mValue << std::endl;

	MyClass c2{ c1 };
	std::cout << c2.mValue << std::endl;

	// 복사생성자를 제공하지 않더라도,
	// 암시적으로 생성되기 때문에 복사가 가능해진다.


	MyClass c3{ c1 };
	c3.Print();

	// private으로 설정을 해놔도 문제없이 작동한다.
}