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

	// ��������ڸ� �������� �ʴ���,
	// �Ͻ������� �����Ǳ� ������ ���簡 ����������.


	MyClass c3{ c1 };
	c3.Print();

	// private���� ������ �س��� �������� �۵��Ѵ�.
}