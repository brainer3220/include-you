#ifndef INCLUDE_YOU_LIB
#define INCLUDE_YOU_LIB
#include <iostream>
namespace you {

	enum Color {
		
	};
	class Console {
		Console() {}
	public:
		static Console& getInstance() { static Console console; return console; }
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
		Console& put(const T& output, size_t repeat = 1) {
			while (repeat--)
				std::cout << output;
			return *this;
		}

		//<Type>형의 값을 출력하고 개행합니다.
		template <class T>
		Console& putln(const T& output) {
			std::cout << output << "\n";
			return *this;
		}

		//개행합니다.
		Console& putln() {
			std::cout << "\n";
			return *this;
		}

		//값을 입력받아 o에 저장합니다.
		template <class T>
		Console& get(T& o)
		{
			std::cin >> o;
			return *this;
		}

		//값들을 입력받아 o와 args에 차례로 저장합니다.
		template <class T, class ...Args>
		Console& get(T& o, Args ...args) {
			std::cin >> o;
			return get(args...);
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

		//TODO impl
		template <class ...Char>
		char* concatChar(char c, Char ...args) {

		}

		Console& setColor()
		{

		}
	};
	static Console& console = Console::getInstance();
}
#endif
