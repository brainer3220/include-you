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

		Console& setColor()
		{

		}
	};
	static Console& console = Console::getInstance();
}
#endif
