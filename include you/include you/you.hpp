#ifndef INCLUDE_YOU_LIB
#define INCLUDE_YOU_LIB

#include <iostream>
#include "color.h"
namespace you {

	class Console {
		Console();
	public:
		// Console ��ü�� ����ϴ�.
		static Console& getInstance();

		//Hello World!�� ����մϴ�.
		Console& printHelloWorld();

		//<Type>������ �Է��� �޾� ���� ��ȯ�մϴ�.
		template <class T>
		const T& get();

		//<Type>���� ���� (repeat��) ����մϴ�.
		template <class T>
		Console& put(const T& output, size_t repeat = 1);

		//<Type>���� ���� ����ϰ� �����մϴ�.
		template <class T>
		Console& putln(const T& output);

		//�����մϴ�.
		Console& putln();

		//���� �Է¹޾� o�� �����մϴ�.
		template <class T>
		Console& get(T& o);

		//������ �Է¹޾� o�� args�� ���ʷ� �����մϴ�.
		template <class T, class ...Args>
		Console& get(T& o, Args ...args);

		/*//���� ����ϴ�.
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
