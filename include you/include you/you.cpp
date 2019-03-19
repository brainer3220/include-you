#include "you"
#include <Windows.h>

namespace you {
	Console& Console::getInstance()
	{
		static Console console;
		return console;
	}

	Console& Console::printHelloWorld()
	{
		std::cout << "Hello World!";
		return *this;
	}

	Console& Console::putln()
	{
		std::cout << "\n";
		return *this;
	}

	Console& Console::setColor(Color c)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)c);
		return *this;
	}

	Console& Console::pause()
	{
		system("pause");
		return *this;
	}
}