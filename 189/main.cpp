#include <iostream>

class MyClass
{
private:
	int mValue;

public:
	MyClass(int value) : mValue{ value }
	{
		std::cout << "일반 생성자" << std::endl;
	}

	MyClass(const MyClass& from) : mValue{ from.mValue }
	{
		std::cout << "복사 생성자" << std::endl;
	}
};

int main()
{
	MyClass c1{ MyClass{1} };

	// 무명객체에 이름을 붙이면 복사가 필요없다.
	// MyClass c1 = MyClass(1) 와 같은 표기이기에
	// 일반생성자 한번만 출력

	MyClass c2{ c1 };
	// 명확한 인스턴스, 즉 명확한 객체가 들어가야만 복사가 된다.
	// 복사생성자 출력
}