#include <iostream>

class MyClass
{
private:
	int mValue;

public:
	MyClass(int value) : mValue{ value }
	{
		std::cout << "�Ϲ� ������" << std::endl;
	}

	MyClass(const MyClass& from) : mValue{ from.mValue }
	{
		std::cout << "���� ������" << std::endl;
	}
};

int main()
{
	MyClass c1{ MyClass{1} };

	// ����ü�� �̸��� ���̸� ���簡 �ʿ����.
	// MyClass c1 = MyClass(1) �� ���� ǥ���̱⿡
	// �Ϲݻ����� �ѹ��� ���

	MyClass c2{ c1 };
	// ��Ȯ�� �ν��Ͻ�, �� ��Ȯ�� ��ü�� ���߸� ���簡 �ȴ�.
	// ��������� ���
}