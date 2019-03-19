#ifndef INCLUDE_YOU_LIB
#define INCLUDE_YOU_LIB
#include <iostream>
class You {
public:
	//Hello World!를 출력합니다.
	void printHelloWorld() {
		std::cout << "Hello World!";
	}

	//<Type>형으로 입력을 받아 값을 반환합니다.
	template <class T>
	const T& get() {
		T input;
		std::cin >> input;
		return input;
	}


	//<Type>형의 값을 repeat번 출력합니다.
	template <class T>
	You& put(const T& output, size_t repeat=1) {
		while(repeat--)
			std::cout << output;
		return *this;
	}

	//<Type>형의 값을 출력하고 개행합니다.
	template <class T>
	You& putln(const T& output) {
		std::cout << output << "\n";
		return *this;
	}

	//개행합니다.
	You& putln() {
		std::cout << "\n";
		return *this;
	}

	/*//별을 찍습니다.
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
