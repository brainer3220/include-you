#ifndef INCLUDE_YOU_LIB
#define INCLUDE_YOU_LIB
#include <iostream>
#include <Windows.h>
namespace you {

	enum class Color {
		RED = FOREGROUND_RED | FOREGROUND_INTENSITY,
		BLUE = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
		GREEN = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
		BLACK = 0,
		GRAY = FOREGROUND_INTENSITY,
		YELLOW = FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY,
		WHITE = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
		SKY_BLUE = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
		PURPLE = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	};
	class Console {
		Console() {}
	public:
		static Console& getInstance() { static Console console; return console; }
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
		Console& put(const T& output, size_t repeat = 1) {
			while (repeat--)
				std::cout << output;
			return *this;
		}

		//<Type>���� ���� ����ϰ� �����մϴ�.
		template <class T>
		Console& putln(const T& output) {
			std::cout << output << "\n";
			return *this;
		}

		//�����մϴ�.
		Console& putln() {
			std::cout << "\n";
			return *this;
		}

		//���� �Է¹޾� o�� �����մϴ�.
		template <class T>
		Console& get(T& o)
		{
			std::cin >> o;
			return *this;
		}

		//������ �Է¹޾� o�� args�� ���ʷ� �����մϴ�.
		template <class T, class ...Args>
		Console& get(T& o, Args ...args) {
			std::cin >> o;
			return get(args...);
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

		//TODO impl
		template <class ...Char>
		char* concatChar(char c, Char ...args) {

		}

		Console& setColor(Color c)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)c);
			return *this;
		}

		Console& pause()
		{
			system("pause");
			return *this;
		}
	};
	static Console& console = Console::getInstance();
}
#endif
