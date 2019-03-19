#ifndef INCLUDE_YOU_LIB
#define INCLUDE_YOU_LIB

#include <iostream>
#include "color.h"
namespace you {

	class Console {
		Console();
	public:
		// Console 객체를 얻습니다.
		static Console& getInstance();

		//Hello World!를 출력합니다.
		Console& printHelloWorld();

		//<Type>형으로 입력을 받아 값을 반환합니다.
		template <class T>
		const T& get();

		//<Type>형의 값을 (repeat번) 출력합니다.
		template <class T>
		Console& put(const T& output, size_t repeat = 1);

		//<Type>형의 값을 출력하고 개행합니다.
		template <class T>
		Console& putln(const T& output);

		//개행합니다.
		Console& putln();

		//값을 입력받아 o에 저장합니다.
		template <class T>
		Console& get(T& o);

		//값들을 입력받아 o와 args에 차례로 저장합니다.
		template <class T, class ...Args>
		Console& get(T& o, Args ...args);

		/*//별을 찍습니다.
		void putStar(int n) {
			for (int i = 1; i <= n; i++) {
				for (int j = 0; j < i; j++) {
					put("*");
				}
				putln();
			}
		}*/

		//TODO impl
		template <class ...Char>
		char* concatChar(char c, Char ...args) {

		}

		Console& setColor(Color c);

		Console& pause();
	};

	static Console& console = Console::getInstance();

	// impl of template function
	template <class T>
	const T& Console::get() {
		T input;
		std::cin >> input;
		return input;
	}

	template <class T>
	Console& Console::put(const T& output, size_t repeat) {
		while (repeat--)
			std::cout << output;
		return *this;
	}

	template <class T>
	Console& Console::putln(const T& output) {
		std::cout << output << "\n";
		return *this;
	}

	template <class T>
	Console& Console::get(T& o)
	{
		std::cin >> o;
		return *this;
	}

	template <class T, class ...Args>
	Console& Console::get(T& o, Args ...args) {
		std::cin >> o;
		return get(args...);
	}
}

#endif
