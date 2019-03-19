#ifndef INCLUDE_YOU_LIB
#define INCLUDE_YOU_LIB
#include <iostream>
class You {
public:
	//Hello World!�� ����մϴ�.
	void printHelloWorld() {
		std::cout << "Hello World!";
	}

	//<Type>������ �Է��� �޾� ���� ��ȯ�մϴ�.
	template <class T>
	const T& get() {
		T input;
		std::cin >> input;
		return input;
	}


	//<Type>���� ���� repeat�� ����մϴ�.
	template <class T>
	You& put(const T& output, size_t repeat=1) {
		while(repeat--)
			std::cout << output;
		return *this;
	}

	//<Type>���� ���� ����ϰ� �����մϴ�.
	template <class T>
	You& putln(const T& output) {
		std::cout << output << "\n";
		return *this;
	}

	//�����մϴ�.
	You& putln() {
		std::cout << "\n";
		return *this;
	}

	/*//���� ����ϴ�.
	void putStar(int n) {
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < i; j++) {
				put("*");
			}
			putln();
		}
	}*/


};
#endif
